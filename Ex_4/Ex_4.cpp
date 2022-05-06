#include <iostream>

using namespace std;

class Print {
private:
    int number = 5;
    // Miejsce na atrybut
public:
    void print() {
        cout << number;
    }
    // Miejsce na metodę
};

int main() {
    Print p1;
    p1.print();
    // Miejsce na obiekt i wywołanie metody
    return 0;
}