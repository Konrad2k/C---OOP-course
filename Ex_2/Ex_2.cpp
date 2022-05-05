#include <iostream>

using namespace std;

class Print {
public:
    void print(int i) {

        cout << "Metoda wywolana zostala dla obiektu numer " << i << endl;
    }
    // Miejsce na metodę
};

int main() {
    Print p1, p2;

    p1.print(1);
    p2.print(2);

    // Miejsce na obiekty i wywołanie metod
    system("pause");
}