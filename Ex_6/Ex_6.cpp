#include <iostream>

using namespace std;

class Sum {
private:
    int number_1 = 5;
    int number_2 = 10;
    // Miejsce na atrybuty
public:
    void sumValues() {
        cout << number_1 + number_2;
    }
    // Miejsce na metodę
};

int main() {
    Sum s1;
    s1.sumValues();
    // Miejsce na obiekt i wywołanie metody
    return 0;
}