#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Övning 1.1.1 - Grundläggande variabler
void ovning111() {
    string name = "Kalle Kula";
    int age = 18;
    bool hasDriverLicense = true;
    
    cout << "Namn: " << name << endl;
    cout << "Ålder: " << age << endl;
    cout << "Körkort: " << (hasDriverLicense ? "Ja" : "Nej") << endl;
}

// Övning 1.1.2 - Kopiera variabler
void ovning112() {
    string admin, name;
    name = "John";
    admin = name;
    cout << "Admin: " << admin << endl;
}

// Övning 1.1.3 - Variabelnamngivning
void ovning113() {
    string planetName = "Jorden";
    string visitorName = "Besökare";
    
    cout << "Planet: " << planetName << endl;
    cout << "Besökare: " << visitorName << endl;
}

// Övning 1.1.4 - Konstanter
void ovning114() {
    const double PI = 3.142;
    cout << "PI: " << PI << endl;
    // PI = 3.14; // Detta kommer att ge kompileringsfel
}

// Övning 1.2.1 - Identifiera datatyper
void ovning121() {
    cout << "5 är av typ: " << typeid(5).name() << endl;
    cout << "3.14 är av typ: " << typeid(3.14).name() << endl;
    cout << "\"3.14\" är av typ: " << typeid("3.14").name() << endl;
    cout << "true är av typ: " << typeid(true).name() << endl;
    cout << "'A' är av typ: " << typeid('A').name() << endl;
}

// Övning 1.3.1 - Grundläggande räkneoperationer
void ovning131() {
    int tal1 = 5, tal2 = 3;
    cout << "Addition: " << tal1 + tal2 << endl;
    cout << "Subtraktion: " << tal1 - tal2 << endl;
    cout << "Multiplikation: " << tal1 * tal2 << endl;
}

// Övning 1.3.2 - Prefix och postfix
void ovning132() {
    int a = 1, b = 1;
    int c = ++a; // a blir 2, c blir 2
    int d = b++; // b blir 2, d blir 1
    
    cout << "a: " << a << ", b: " << b << ", c: " << c << ", d: " << d << endl;
}

// Övning 1.3.3 - Tilldelningsoperatorer
void ovning133() {
    int a = 2;
    int x = 1 + (a *= 2); // a *= 2 gör a = 4, sedan 1 + 4 = 5
    
    cout << "a: " << a << ", x: " << x << endl;
}

// Övning 1.3.4 - Typkonvertering
void ovning134() {
    cout << "5 / 2 = " << 5 / 2 << endl;
    cout << "5.0 / 2 = " << 5.0 / 2 << endl;
    cout << "5 / 2.0 = " << 5 / 2.0 << endl;
    cout << "static_cast<int>(5.7) = " << static_cast<int>(5.7) << endl;
    cout << "static_cast<double>(5) = " << static_cast<double>(5) << endl;
}

// Övning 1.4.1 - Jämförelseoperatorer
void ovning141() {
    cout << "5 > 4: " << (5 > 4) << endl;
    cout << "\"apple\" > \"pineapple\": " << ("apple" > "pineapple") << endl;
    cout << "2 > 12: " << (2 > 12) << endl;
    cout << "5 == 5: " << (5 == 5) << endl;
    cout << "5 != 5: " << (5 != 5) << endl;
}

// Övning 1.5 - If-satser
void ovning15() {
    int age = 16;
    
    if (age >= 18) {
        cout << "Du får ta körkort" << endl;
    } else {
        cout << "Du får inte ta körkort!" << endl;
    }
    
    string name;
    cout << "Ange ditt namn: ";
    cin >> name;
    
    if (name == "Kalle") {
        cout << "Du heter Kalle" << endl;
    } else {
        cout << "Du heter inte Kalle!" << endl;
    }
}

// Övning 1.6 - Loopar
void ovning16() {
    cout << "For-loop 1-10:" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout << endl;
    
    cout << "While-loop 1-10:" << endl;
    int j = 1;
    while (j <= 10) {
        cout << j << " ";
        j++;
    }
    cout << endl;
    
    cout << "Jämna siffror 2-10:" << endl;
    for (int k = 2; k <= 10; k += 2) {
        cout << k << " ";
    }
    cout << endl;
}

// Övning 1.7 - Switch
void ovning17() {
    char browser = 'E';
    
    switch (browser) {
        case 'E':
            cout << "You've got the Edge!" << endl;
            break;
        case 'C':
        case 'F':
        case 'S':
        case 'O':
            cout << "Okay we support these browsers too" << endl;
            break;
        default:
            cout << "We hope that this page looks ok!" << endl;
    }
}

// Övning 1.8 - Funktioner
int add(int x) {
    return x + x;
}

bool checkAge(int age) {
    if (age > 18) {
        return true;
    } else {
        cout << "Du är för ung tyvärr!" << endl;
        return false;
    }
}

int min(int a, int b) {
    return (a < b) ? a : b;
}

int pow(int x, int n) {
    int result = 1;
    for (int i = 0; i < n; i++) {
        result *= x;
    }
    return result;
}

void ovning18() {
    cout << "add(5) = " << add(5) << endl;
    cout << "checkAge(20) = " << checkAge(20) << endl;
    cout << "min(2, 5) = " << min(2, 5) << endl;
    cout << "pow(2, 3) = " << pow(2, 3) << endl;
}

// Övning 1.9 - Referenser och Pekare
void ovning19() {
    int x = 10;
    int& ref = x;
    ref = 20;
    cout << "x efter ändring via referens: " << x << endl;
    
    int y = 15;
    int* ptr = &y;
    *ptr = 25;
    cout << "y efter ändring via pekare: " << y << endl;
}

// Övning 1.10 - Klasser
class Animal {
public:
    string color;
    int age;
    string name;
    string surname;
    
    void sound() {
        cout << "Djuret låter!" << endl;
    }
    
    void sleep() {
        cout << "Djuret sover!" << endl;
    }
};

class User {
public:
    string name;
    string surname;
};

void ovning110() {
    Animal cat;
    cat.color = "Svart";
    cat.age = 5;
    cat.name = "Misse";
    cat.surname = "Smith";
    
    cout << "Färg: " << cat.color << endl;
    cout << "Ålder: " << cat.age << endl;
    cout << "Namn: " << cat.name << endl;
    cout << "Efternamn: " << cat.surname << endl;
    
    cat.sound();
    cat.sleep();
    
    User user;
    user.name = "John";
    user.surname = "Smith";
    user.name = "Pete";
    cout << "Användare: " << user.name << " " << user.surname << endl;
}

// Övning 1.11 - Vektorer
void ovning111() {
    vector<string> names = {"Anna", "Erik", "Maria"};
    
    cout << "Gruppmedlemmar:" << endl;
    for (const string& name : names) {
        cout << name << endl;
    }
    
    vector<string> fruits = {"Apples", "Pear", "Orange"};
    vector<string> shoppingCart = fruits;
    shoppingCart.push_back("Banana");
    
    cout << "Antal frukter i fruits: " << fruits.size() << endl;
    cout << "Antal frukter i shoppingCart: " << shoppingCart.size() << endl;
    
    vector<string> styles = {"Jazz", "Blues"};
    styles.push_back("Rock-n-Roll");
    styles[1] = "Classics";
    cout << "Första stilen: " << styles[0] << endl;
    styles.erase(styles.begin());
    styles.insert(styles.begin(), {"Rap", "Reggae"});
    
    cout << "Slutliga stilar: ";
    for (const string& style : styles) {
        cout << style << " ";
    }
    cout << endl;
}

int main() {
    cout << "=== C++ Övningar Lösningar ===" << endl << endl;
    
    cout << "1.1.1 - Grundläggande variabler:" << endl;
    ovning111();
    cout << endl;
    
    cout << "1.1.2 - Kopiera variabler:" << endl;
    ovning112();
    cout << endl;
    
    cout << "1.1.3 - Variabelnamngivning:" << endl;
    ovning113();
    cout << endl;
    
    cout << "1.1.4 - Konstanter:" << endl;
    ovning114();
    cout << endl;
    
    cout << "1.2.1 - Identifiera datatyper:" << endl;
    ovning121();
    cout << endl;
    
    cout << "1.3.1 - Grundläggande räkneoperationer:" << endl;
    ovning131();
    cout << endl;
    
    cout << "1.3.2 - Prefix och postfix:" << endl;
    ovning132();
    cout << endl;
    
    cout << "1.3.3 - Tilldelningsoperatorer:" << endl;
    ovning133();
    cout << endl;
    
    cout << "1.3.4 - Typkonvertering:" << endl;
    ovning134();
    cout << endl;
    
    cout << "1.4.1 - Jämförelseoperatorer:" << endl;
    ovning141();
    cout << endl;
    
    cout << "1.5 - If-satser:" << endl;
    ovning15();
    cout << endl;
    
    cout << "1.6 - Loopar:" << endl;
    ovning16();
    cout << endl;
    
    cout << "1.7 - Switch:" << endl;
    ovning17();
    cout << endl;
    
    cout << "1.8 - Funktioner:" << endl;
    ovning18();
    cout << endl;
    
    cout << "1.9 - Referenser och Pekare:" << endl;
    ovning19();
    cout << endl;
    
    cout << "1.10 - Klasser:" << endl;
    ovning110();
    cout << endl;
    
    cout << "1.11 - Vektorer:" << endl;
    ovning111();
    cout << endl;
    
    return 0;
}
