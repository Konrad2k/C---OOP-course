#include <iostream>
#include <vector>

using namespace std;

class Numbers {
private:
	vector <int> numbers;
	// Miejsce an atrybut
public:
	void setNumbers(int numer1, int numer2, int numer3) {
		numbers.push_back(numer1);
		numbers.push_back(numer2);
		numbers.push_back(numer3);
	}
	void displayNumbers() {
		for (int i = 0; i < numbers.size(); i++) {
			cout << "|" << numbers[i];
		}
		cout << "|";
	}
	// Miejsce na metody
};

int main() {
	Numbers n1, n2;
	n1.setNumbers(5, 3, 4);
	n1.displayNumbers();
	cout << endl;
	n2.setNumbers(7, 4, 2);
	n2.displayNumbers();
	return 0;
}