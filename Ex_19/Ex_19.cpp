#include <iostream>


using namespace std;

class Triangle {
private:
    float a;
    float h;
    // Miejsce na atrybuty
public:
    void setValue(float a_1, float h_1) {
        a = a_1;
        h = h_1;
    }
    void calculateArea() {
        cout << "Pole trojkata wynosi: " << a * h / 2 << endl;
    }
    // Miejsce na metody
};

int main() {
    Triangle t1, t2;
    t1.setValue(4, 2);
    t1.calculateArea();

    t2.setValue(8, 4);
    t2.calculateArea();
    // Miejsce na obiekty i wywołanie metod

    return 0;
}