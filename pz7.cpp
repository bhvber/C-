#include <iostream>
#include <windows.h>

using namespace std;

class Bank {
protected:
    double bankPercent = 5.0;

public:
    virtual void GetPercent(double sum) {
        cout << "Процент по банку: " << sum * (bankPercent / 100.0) << endl;
    }
};

class MicroBank : public Bank {
private:
    double microPercent = 2.0;

public:
    void GetPercent(double sum) override {
        double totalPercent = bankPercent + microPercent;
        cout << "Процент по микробанку: " << sum * (totalPercent / 100.0) << endl;
    }
};

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    Bank* b1 = new Bank();
    Bank* b2 = new MicroBank();

    b1->GetPercent(1000);
    b2->GetPercent(1000);

    delete b1;
    delete b2;
    return 0;
}