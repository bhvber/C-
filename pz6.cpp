#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    
    int* arr = new int[6];

    cout << "Введите 6 чисел:" << endl;
    for (int i = 0; i < 6; i++) {
        cout << "Элемент " << i + 1 << ": ";
        cin >> arr[i];
    }

    
    for (int i = 0; i < 6; i += 2) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }

    cout << "\nИзмененный массив: ";
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr; 
    return 0
}
