#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    string fio;
    cout << "Введите ФИО: ";
    getline(cin, fio);


    ofstream f1_out("file1.txt");
    f1_out << fio << endl;
    f1_out.close();

    ifstream f1_in("file1.txt");
    string data;
    getline(f1_in, data);
    f1_in.close();

    ofstream f2_out("file2.txt", ios::app);
    f2_out << data << endl;
    f2_out.close();

    cout << "Данные из file1.txt успешно перенесены в file2.txt!" << endl;

    return 0;
}
