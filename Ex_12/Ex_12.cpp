#include <iostream>

using namespace std;

class Print {
public:

    void number(int liczba) {
        cout << liczba;
    }

    void words(string slowa) {
        cout << slowa;

    }
    // Miejsce na atrubuty
};

int main() {
    Print p1;
    p1.number(15);
    cout << endl;
    p1.words("Object Oriented Programming");
    // Miejsce na kod
    return 0;
}
