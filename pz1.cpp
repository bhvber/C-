#include <iostream>
#include <cmath>
#include <windows.h> 

using namespace std;

double computeFunction(double x) {
    return -sin(x - 5.0);
}

int main() {

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    double a, b;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;

    double maxVal = (a > b) ? a : b;
    double result = computeFunction(maxVal);

    cout << "Большее число: " << maxVal << endl;
    cout << "Значение функции F(x) = -sin(x - 5): " << result << endl;

    return 0;
}
