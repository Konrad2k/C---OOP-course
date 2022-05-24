#include <iostream>

using namespace std;

class Player {
private:
    string name;
    float experience;
    // Miejsce na atrybuty
public:
    void setData(string name_1, float experience_1) {
        name = name_1;
        experience = experience_1;
    }
    void showLevel() {


        if (experience > 0 && experience < 100) {
            cout << "Poziom gracza " << name << ": 1";
        }

        else if (experience > 100 && experience < 200) {
            cout << "Poziom gracza " << name << ": 2";
        }

        else if (experience > 200 && experience < 300) {
            cout << "Poziom gracza " << name << ": 3";
        }
        else {
            cout << "Podano zla wartosc!";
        }
    }
    // Miejsce na metody
};

int main() {
    Player p1, p2;
    p1.setData("Kuba", 130);
    p1.showLevel();
    cout << endl;
    p2.setData("Bartek", 210);
    p2.showLevel();
    cout << endl;
    // Miejsce na obiekty i wywołanie metod
    return 0;
}