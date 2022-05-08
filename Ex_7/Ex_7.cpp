#include <iostream>

using namespace std;

class Print {
private:
    string words = "Programowanie obiektowe";
    // Miejsce na atrybut
public:
    void print() {
        cout << words;
    }
    // Miejsce na metode
};

int main() {
    Print p1;
    p1.print();
    // Miejsce na obiekt i wywołanie metody
    return 0;
}