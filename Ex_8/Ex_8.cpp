#include <iostream>

using namespace std;

class Print {
public:
    void print(string nazwa) {
        cout << nazwa << endl;
    }
    // Miejsce na metodę
};

int main() {
    Print p1, p2;

    p1.print("Programowanie obiektowe");
    p2.print("Unreal Engine");
    // Miejsce na obiekty i wywołanie metod
    return 0;
}