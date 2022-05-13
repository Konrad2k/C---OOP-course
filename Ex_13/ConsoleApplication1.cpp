#include <iostream>

using namespace std;

class Produkty {
public:
    string typ_produktu;
    string nazwa_produktu;
    float cena;
    // Miejsce na atrybuty
};

int main() {
    Produkty p1;
    Produkty p2;
    p1.typ_produktu = "Pieczywo";
    p1.nazwa_produktu = "Chleb razowy";
    p1.cena = 4.59;
    p2.typ_produktu = "Napoje";
    p2.nazwa_produktu = "Cola";
    p2.cena = 4.99;

    cout << "1. produkt" << endl;
    cout << "Typ: " << p1.typ_produktu << endl;
    cout << "Nazwa: " << p1.nazwa_produktu << endl;
    cout << "Cena: " << p1.cena << endl;
    cout << endl;
    cout << "2. produkt" << endl;
    cout << "Typ: " << p2.typ_produktu << endl;
    cout << "Nazwa: " << p2.nazwa_produktu << endl;
    cout << "Cena: " << p2.cena;
    // Miejsce na kod
    system("pause");
}
