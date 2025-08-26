# C++

## Innehåll

1. [Testmiljö](#0-testmiljö)
2. [Variabler](#11-variabler)
3. [Datatyper](#12-datatyper)
4. [Operatorer](#13-operatorer)
5. [Jämförelser](#14-jämförelser)
6. [If-satser](#15-if-satser)
7. [Loopar: while & for](#16-loopar-while-och-for)
8. [Switch](#17-switch-satsen)
9. [Funktioner](#18-funktioner)
10. [Referenser & Pekare](#19-referenser-och-pekare)
11. [Klasser](#110-klasser)
12. [Vektorer](#111-vektorer)

## Introduktion

C++ är ett kraftfullt programmeringsspråk som kombinerar objektorienterad programmering med systemprogrammering. Det används för att utveckla operativsystem, spel, inbyggda system och högpresterande applikationer. C++ är en utökning av C-språket och erbjuder både lågnivå- och hög nivå-funktionalitet.

### Vad är C++?

> **C++** är ett allmänt programmeringsspråk som stöder flera programmeringsparadigm, inklusive objektorienterad programmering, generisk programmering och procedurprogrammering. C++ är utformat för att ge programmerare en hög nivå av kontroll över systemresurser och minneshantering.
>
> C++ är känt för sin prestanda och effektivitet, vilket gör det idealiskt för systemprogrammering, spelutveckling och applikationer där hastighet är kritisk. Språket stöder både kompilerad och länkad kod, vilket ger optimal prestanda vid körning.
>
> C++ används i många kända projekt som Windows, macOS, Linux-kärnan, webbläsare som Chrome och Firefox, och spel som World of Warcraft och Counter-Strike.

### Kursinformation

- **Mål:** Lära dig grunderna i C++ programmering
- **Metod:** Kombination av teori, praktiska övningar och projekt
- **Resurser:** Text, videor och hands-on kodning
- **Tips:** Våga testa, experimentera och fråga om hjälp!

### Huvudresurser

- [W3Schools C++](https://www.w3schools.com/cpp/default.asp)
- [Learn C++ - The Cherno](https://www.youtube.com/playlist?list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb)

---

## 0. Testmiljö

Det finns flera sätt att testa C++-kod. Här är två rekommenderade metoder:

### Metod 1: Lokal utvecklingsmiljö

1. **Installera kompilator:**
   - Windows: Installera MinGW eller Visual Studio Community
   - macOS: Installera Xcode Command Line Tools
   - Linux: Installera g++ med `sudo apt-get install g++`

2. **Skapa testfil:**
   - Skapa en fil med namnet `test.cpp`
   - Lägg till följande kod:

```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 5;
    cout << x << endl;
    // Skriv din C++-kod här
    return 0;
}
```

3. **Kompilera och kör:**
   - Öppna terminal/kommandotolk
   - Navigera till mappen med `cd sökväg/till/mapp`
   - Kompilera med `g++ test.cpp -o test`
   - Kör med `./test` (Linux/macOS) eller `test.exe` (Windows)

### Metod 2: Online-miljö

Använd en online-kompilator för snabba tester:

- [OnlineGDB](https://www.onlinegdb.com/online_c++_compiler)
- [Replit](https://replit.com/languages/cpp)
- [CodeChef](https://www.codechef.com/ide)

---

## 1.1 Variabler

Variabler används för att lagra data som kan användas och ändras i ditt program.

### Resurser

- [W3Schools - C++ Variables](https://www.w3schools.com/cpp/cpp_variables.asp)

### Övningsuppgifter

- [Övningar Variabler](https://github.com/abbjetmus/programmering/tree/master/C++/%C3%B6vningar#11-variabler)

## 1.2 Datatyper

C++ har flera olika datatyper för att lagra olika sorters information.

### Resurser

- [W3Schools - C++ Data Types](https://www.w3schools.com/cpp/cpp_data_types.asp)

### Övningsuppgifter

- [Övningar Datatyper](https://github.com/abbjetmus/programmering/tree/master/C++/%C3%B6vningar#%C3%B6vningsuppgifter-1)

## 1.3 Operatorer

Operatorer används för att utföra beräkningar och jämförelser mellan variabler och värden.

### Resurser

- [W3Schools - C++ Operators](https://www.w3schools.com/cpp/cpp_operators.asp)

### Övningsuppgifter

- [Övningar Operatorer](https://github.com/abbjetmus/programmering/tree/master/C++/%C3%B6vningar#13-operatorer)

## 1.4 Jämförelser

Jämförelseoperatorer används för att jämföra värden och returnerar true eller false.

### Resurser

- [W3Schools - C++ Comparisons](https://www.w3schools.com/cpp/cpp_conditions.asp)

### Övningsuppgifter

- [Övningar Jämförelser](https://github.com/abbjetmus/programmering/tree/master/C++/%C3%B6vningar#%C3%B6vningsuppgifter-3)

## 1.5 If-satser

If-satser används för att köra kod endast under vissa villkor.

### Resurser

- [W3Schools - C++ If...Else](https://www.w3schools.com/cpp/cpp_conditions.asp)

### Övningsuppgifter

- [Övningar If-satser](https://github.com/abbjetmus/programmering/tree/master/C++/%C3%B6vningar#%C3%B6vningsuppgifter-4)

## 1.6 Loopar: while och for

Loopar används för att upprepa kod flera gånger under kontrollerade villkor.

### Resurser

- [W3Schools - C++ For Loops](https://www.w3schools.com/cpp/cpp_for_loop.asp)
- [W3Schools - C++ While Loops](https://www.w3schools.com/cpp/cpp_while_loop.asp)

### Övningsuppgifter

- [Övningar Loopar: while och for](https://github.com/abbjetmus/programmering/tree/master/C++/%C3%B6vningar#%C3%B6vningsuppgifter-5)

## 1.7 Switch-satsen

Switch-satsen är ett alternativ till if-else när du vill jämföra en variabel mot många olika värden.

### Resurser

- [W3Schools - C++ Switch Statement](https://www.w3schools.com/cpp/cpp_switch.asp)

### Övningsuppgifter

- [Övningar Switch-satsen](https://github.com/abbjetmus/programmering/tree/master/C++/%C3%B6vningar#%C3%B6vningsuppgifter-6)

## 1.8 Funktioner

Funktioner är återanvändbara kodblock som utför specifika uppgifter.

### Resurser

- [W3Schools - C++ Functions](https://www.w3schools.com/cpp/cpp_functions.asp)

### Övningsuppgifter

- [Övningar Funktioner](https://github.com/abbjetmus/programmering/tree/master/C++/%C3%B6vningar#%C3%B6vningsuppgifter-7)

## 1.9 Referenser och Pekare

Referenser och pekare ger dig kontroll över minneshantering och dataåtkomst.

### Resurser

- [W3Schools - C++ References](https://www.w3schools.com/cpp/cpp_references.asp)
- [W3Schools - C++ Pointers](https://www.w3schools.com/cpp/cpp_pointers.asp)

### Övningsuppgifter

- [Övningar Referenser och Pekare](https://github.com/abbjetmus/programmering/tree/master/C++/%C3%B6vningar#%C3%B6vningsuppgifter-8)

## 1.10 Klasser

Klasser är grunden för objektorienterad programmering i C++.

### Resurser

- [W3Schools - C++ Classes](https://www.w3schools.com/cpp/cpp_classes.asp)

### Övningsuppgifter

- [Övningar Klasser](https://github.com/abbjetmus/programmering/tree/master/C++/%C3%B6vningar#%C3%B6vningsuppgifter-9)

## 1.11 Vektorer

Vektorer är dynamiska arrays som kan ändra storlek vid körning.

### Resurser

- [W3Schools - C++ Vectors](https://www.w3schools.com/cpp/cpp_vectors.asp)

### Övningsuppgifter

- [Övningar Vektorer](https://github.com/abbjetmus/programmering/tree/master/C++/%C3%B6vningar#%C3%B6vningsuppgifter-10)
