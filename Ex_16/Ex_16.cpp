#include <iostream>

using namespace std;

class Print {
private:
	int wartosc_poczatkowa;
	int wartosc_koncowa;

public:
	void printNumbers(int wartosc_pocz, int wartosc_konc) {
		for (int i = wartosc_pocz; i <= wartosc_konc; i++) {
			cout << "|" << i;
		}
		cout << "|";
	}
	// Miejsce na metode
};

int main() {
	Print p1, p2;
	p1.printNumbers(2, 9);
	cout << endl;
	p2.printNumbers(3, 7);
	// Miejsce na obiekty i wywołanie metod
	return 0;
}