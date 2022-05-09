#include <iostream>

using namespace std;

class Exponentiation {
public:
    void potega(int podstawa, int wykladnik) {
        int potegowanie = 1;
        for (int i = 0; i < wykladnik; i++) {
            potegowanie *= podstawa;
        }
        cout << podstawa << " do potegi " << wykladnik << " : " << potegowanie << endl;
    }
    // Miejsce na metodę 
};

int main() {
    Exponentiation e1, e2;
    e1.potega(3, 2);
    e2.potega(2, 3);
    // Miejsce na obiekty i wywołanie metod
    return 0;
}