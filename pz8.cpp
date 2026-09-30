#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    double num;
    cout << "Введите число для записи в файл: ";
    cin >> num;

    // Запись в первый файл
    ofstream f1("primer1.txt");
    f1 << num;
    f1.close();

    // Чтение из первого файла и запись 50% во второй
    ifstream in1("primer1.txt");
    if (in1 >> num) {
        ofstream f2("primer2.txt");
        f2 << (num * 0.5);
        f2.close();
        cout << "Успешно! 50% от числа (" << num * 0.5 << ") сохранено в primer2.txt" << endl;
    }
    else {
        cout << "Ошибка чтения из файла!" << endl;
    }
    in1.close();

    return 0;
}