#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

double calculate(double x) {
    return -sin(x - 5.0);
}

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int choice = 1;

    while (choice == 1) {
        double x;
        cout << "\nВведите x: ";
        cin >> x;

        cout << "Результат F(x) = " << calculate(x) << endl;

        cout << "Продолжить вычисления? (1 - да, 0 - нет): ";
        cin >> choice;
    }

    return 0;
}