#include <iostream>

using namespace std;

class Rower {
private:
    string marka;
    string rozmiar_ramy;
    float rozmiar_kola;
    string kolor;
    float cena;
    // Miejsce na atrybuty
public:
    void pobieranieDanych(string p_marka, string p_rozmiar_ramy, float p_rozmiar_kola, string p_kolor, float p_cena) {
        marka = p_marka;
        rozmiar_ramy = p_rozmiar_ramy;
        rozmiar_kola = p_rozmiar_kola;
        kolor = p_kolor;
        cena = p_cena;
    }
    void wyswietlanieDanych() {
        cout << "Marka: " << marka << endl;
        cout << "Rozmiar ramy: " << rozmiar_ramy << endl;
        cout << "Rozmiar kola: " << rozmiar_kola << endl;
        cout << "Kolor: " << kolor << endl;
        cout << "Cena: " << cena << " PLN" << endl << endl;
    }
    // Miejsce na metody

};

int main() {
    Rower r1, r2;
    r1.pobieranieDanych("Kross", "L", 27.5, "Czarny", 1650);
    r1.wyswietlanieDanych();
    r2.pobieranieDanych("Scott", "XL", 29, "Czerwony", 1900);

    r2.wyswietlanieDanych();
    // Miejsce na obiekty

    system("pause");
}
