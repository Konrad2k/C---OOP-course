#include <iostream>

using namespace std;

class Print {
public:
    void print() {
        cout << "Korzystamy z klasy o nazwie Print";
    }
    // Miejsce na metodę
};

int main() {
    Print p1;

    p1.print();
    // Miejsce na obiekt oraz wywołanie metod
    system("pause");
}