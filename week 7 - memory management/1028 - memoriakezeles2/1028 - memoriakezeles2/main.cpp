#include <iostream>
#include <string>
#include <vector>
#include <cstdlib> // rand és srand miatt
#include <ctime>   // time miatt

using namespace std;

// Függvény prototípusa (elődeklaráció)
void fuggveny();
double teglalapTerulet(double szelesseg, double magassag);

struct adat {
    int num;
    char c;
    bool bo;
};

int main() {
    int a;
    cout << "adjon meg egy szamot: ";
    cin >> a;
    cin.ignore();

    // Megjegyzés: a memóriacím kiíratásához pointerré kell castolni (static_cast), 
    // különben a char/string stream miatt furcsán viselkedhet.
    cout << "0x" << &a << ": " << a << endl;

    // 1. Referenciák
    int& ref = a;
    cout << "0x" << &ref << ": " << ref << endl;

    cout << "ertek valtozas" << endl;

    a = 30;
    ref = 2; // Mivel a ref az 'a' referenciája, ez az 'a'-t is 2-re állítja!

    cout << "0x" << &a << ": " << a << endl;
    cout << "0x" << &ref << ": " << ref << endl;

    // --- 2. feladat: Dinamikus memóriafoglalás ---

    srand((unsigned int)time(NULL));
    int dobasok;

    // Hiba volt: a '!dobasok >= 3' nem azt csinálja, amit vársz. 
    // Helyesen: amíg a dobasok száma kevesebb, mint 3, addig kérjük újra.
    do {
        cout << "adja meg a dobasok szamat (min. 3): ";
        cin >> dobasok;
    } while (dobasok < 3);
    cin.ignore();

    // Itt új nevet adtunk a tömbnek (tomb), mert az 'a'-t már elhasználtuk fent!
    int* tomb = new int[dobasok];

    for (int i = 0; i < dobasok; i++) {
        tomb[i] = rand() % 6 + 1;
        cout << tomb[i] << endl;
    }

    int* sum = new int;
    *sum = 0;

    for (int i = 0; i < dobasok; i++) {
        *sum += tomb[i]; // Hozzáadjuk az elemeket a mutató által rámutatott értékhez
    }

    cout << endl << "az atlag: " << (float)*sum / dobasok << endl;

    // Memória felszabadítása (fontos a new után!)
    delete sum;
    delete[] tomb;

    // --- 3. Vektorok (vector) és struktúrák ---

    vector<int> b;
    b.push_back(4);
    b.push_back(1);
    b.push_back(21);

    cout << "a 'b' tomb merete: " << b.size() << endl;

    vector<adat> adatok;
    adat asd;
    asd.num = 15;
    asd.c = 'A';
    asd.bo = true;

    adatok.push_back(asd);

    cout << adatok.size() << endl;
    cout << adatok[0].c << endl;

    asd.num = 20;
    asd.c = 'b';
    asd.bo = false;

    adatok.push_back(asd);

    for (size_t i = 0; i < adatok.size(); i++) {
        cout << "adatok[" << i << "].num = " << adatok[i].num << " | ";
        cout << "adatok[" << i << "].c = " << adatok[i].c << " | ";
        cout << "adatok[" << i << "].bo = " << adatok[i].bo << endl;
    }

    // --- Függvény hívása ---
    fuggveny();

    // --- Téglalap terület számítás ---
    double a_oldal, b_oldal;
    cout << "\nAdd meg a teglalap szelesseget: ";
    cin >> a_oldal;
    cout << "Add meg a teglalap magassagat: ";
    cin >> b_oldal;

    double terulet = teglalapTerulet(a_oldal, b_oldal);
    cout << "A teglalap terulete: " << terulet << endl;

    return 0;
}

// Függvény definiálása
void fuggveny() {
    cout << "Hello, world!" << endl;
}

double teglalapTerulet(double szelesseg, double magassag) {
    return szelesseg * magassag;
}