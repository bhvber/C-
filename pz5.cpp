#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

class Car {
public:
    string name;
    double speed;

    bool operator>(const Car& c) { return speed > c.speed; }
};

class Account {
public:
    double income = 0;
    double expense = 0;

    void operator++() { income++; }     // Инкремент увеличивает доход
    void operator--() { expense++; }    // Декремент увеличивает расход
    void operator+(double val) {        // Сложение с числом
        if (val > 0) income += val;
        else expense += (-val);
    }
};

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    // Сравнение машин
    Car c1{ "BMW", 220 }, c2{ "Audi", 200 };
    if (c1 > c2) cout << "BMW быстрее, чем Audi" << endl;

    // Работа со счетом
    Account acc;
    ++acc;        // Доход +1
    acc + 500;    // Доход +500
    acc + (-150); // Расход +150

    cout << "Доход: " << acc.income << ", Расход: " << acc.expense << endl;

    return 0;
}