#include <iostream>

using namespace std;

class CashMachine {
private:
    float stan_konta;
    // Miejsce na atrybut
public:
    void depositCash(float kwota) {
        stan_konta += kwota;
        cout << "Wplacona kwota:" << kwota << endl;
    }
    void withdrawCash(float kwota) {
        stan_konta -= kwota;
        cout << "Wyplacona kwota: " << kwota << endl;
    }
    void checkStatus() {
        cout << "Stan konta: " << stan_konta << endl;
    }
    // Miejsce na metody
};

int main() {
    CashMachine cm1;
    cm1.depositCash(5000);
    cm1.checkStatus();
    cm1.withdrawCash(1500);
    cm1.checkStatus();
    cm1.depositCash(1000);
    cm1.checkStatus();
    // Miejsce na obiekt i wywołanie metod

    return 0;
}