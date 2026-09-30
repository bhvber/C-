#include <iostream>
#include <string>
#include <algorithm>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    // 1. Поиск символа в строке
    string str = "hello world";
    char search_char;
    cout << "Строка: " << str << endl;
    cout << "Введите символ для поиска: ";
    cin >> search_char;

    int count = 0;
    for (char c : str) {
        if (c == search_char) count++;
    }

    if (count > 0) {
        cout << "Символ встречается " << count << " раз(а)" << endl;
    }
    else {
        cout << "Строка не содержит этот символ" << endl;
    }

    // 2. Сортировка массива и поиск
    int arr[10];
    cout << "\nВведите 10 чисел массива:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Число " << i + 1 << ": ";
        cin >> arr[i];
    }

    sort(arr, arr + 10); // Сортировка по возрастанию

    int target;
    cout << "\nВведите число для поиска в массиве: ";
    cin >> target;

    int pos = -1;
    for (int i = 0; i < 10; i++) {
        if (arr[i] == target) {
            pos = i;
            break;
        }
    }

    if (pos != -1) {
        cout << "Число найдено на позиции (индекс): " << pos << endl;
    }
    else {
        cout << "Число не найдено" << endl;
    }

    return 0;
}