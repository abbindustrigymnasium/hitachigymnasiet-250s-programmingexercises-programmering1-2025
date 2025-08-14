#include "FirebaseESP8266.h"  // Inkluderar biblioteket för Firebase
#include <ESP8266WiFi.h>      // Inkluderar biblioteket för WiFi-funktioner

// Definiera Firebase-host och autentisering
#define FIREBASE_HOST ""      // Här ska du ange din Firebase-host dvs url till databasen
#define FIREBASE_AUTH ""      // Här ska du ange din Firebase-autentisering dvs web api nyckeln

// Definiera WiFi-uppgifter
#define WIFI_SSID "Hitachigymnasiet_2.4"  // WiFi-namn
#define WIFI_PASSWORD "mittwifiarsabra" // WiFi-lösenord

// Skapa Firebase Data-objekt
FirebaseData firebaseData;
int counter = 0; // En räknare för att hålla koll på loopens iterationer

void setup() {
  Serial.begin(115200); // Startar seriell kommunikation med en baudrate på 115200
  pinMode(LED_BUILTIN, OUTPUT); // Sätter den inbyggda LED:n som utgång
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD); // Ansluter till WiFi-nätverket
  Serial.print("Connecting to Wi-fi");
  
  // Väntar på att WiFi ska ansluta
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print("."); // Skriver ut punkter medan den väntar
    delay(300); // Väntar 300 ms
  }
  
  Serial.println();
  Serial.print("Connected with IP: "); // Skriver ut den lokala IP-adressen
  Serial.println(WiFi.localIP());
  Serial.println();
  
  // Initierar Firebase med host och autentisering
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
  Firebase.reconnectWiFi(true); // Återansluter till WiFi automatiskt vid förlust
}

void loop() {
  delay(5000); // Väntar 5 sekunder mellan varje iteration
  counter = counter + 1; // Ökar räknaren med 1

  // Hämtar en boolean från Firebase för att styra LED:n
  if (Firebase.getBool(firebaseData, "/led/led")) {
      if (firebaseData.dataType() == "boolean") {         
          Serial.println(firebaseData.boolData()); // Skriver ut värdet från Firebase
          digitalWrite(LED_BUILTIN, firebaseData.boolData()); // Sätter LED:n baserat på värdet
      }
  }

  // Hämtar ett heltal från Firebase och skriver ut det
  if (Firebase.getInt(firebaseData, "/counter")) {
   if (firebaseData.dataType() == "int") {
      int val = firebaseData.intData(); // Hämtar heltalsvärdet
      Serial.println(val); // Skriver ut värdet
      delay(3000); // Väntar 3 sekunder
      Firebase.setInt(firebaseData, "/counter", 60); // Sätter värdet till 60 i Firebase
    }
  }

  // Sätter ett heltal i Firebase under en specifik väg
  Firebase.setInt(firebaseData, "/Room/2022-10-25/Temp/1210", 5);
}
