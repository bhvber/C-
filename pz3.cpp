#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

class ProductBatch {
private:
    string name;
    int quantity;
    int sold = 0;

public:
    void init(string n, int q) {
        name = n;
        quantity = q;
        cout << "[Инициализация] Партия " << name << " (" << quantity << " шт.) создана." << endl;
    }

    void sell(int count = 1) {
        if (quantity - sold >= count) {
            sold += count;
            cout << "Продано: " << count << " шт." << endl;
        }
        else {
            cout << "Ошибка: не хватает товара!" << endl;
        }
    }

    void printRemains() {
        cout << "Товар: " << name << " | Остаток: " << (quantity - sold) << " шт." << endl;
    }
};

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    ProductBatch batch;
    batch.init("Конфеты", 20);
    batch.sell(3);
    batch.printRemains();

    return 0;
}