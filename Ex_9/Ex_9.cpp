#include <iostream>
#include <vector>

using namespace std;

class Ceny {
private:
    float cena;
    // Miejsce na atrybut
public:
    void setValues(float wartosc) {
        cena = wartosc;
    }

    void print() {
        cout << cena << endl;
    }
    // Miejsce na metody
};

int main() {
    Ceny c1[5];

    c1[0].setValues(15.49);
    c1[0].print();
    c1[1].setValues(45.99);
    c1[1].print();
    // Miejsce na obiekt i wywołanie metod
    return 0;
}