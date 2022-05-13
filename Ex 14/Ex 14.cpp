#include <iostream>
#define PI (3.14)
// Miejsce na stałą

using namespace std;

class Kolo {
private:
    float promien;
public:
    void poleKola(float r) {
        cout << "Pole kola o promieniu " << r << " wynosi: " << (r * r) * PI << endl;
    }
    // Miejsce na atrybuty i metody
};

int main() {
    Kolo k1, k2;

    k1.poleKola(5);
    k2.poleKola(3);
    // Miejsce na obiekty
    system("pause");
}
