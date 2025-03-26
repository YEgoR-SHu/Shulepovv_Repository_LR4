#include <iostream>
using namespace std;


struct Numbers {
    int x, y, z;
};

// Функции для ввода значений X, Y, Z
void getX(Numbers& nums) {

}

void getY(Numbers& nums) {

}

void getZ(Numbers& nums) {

}


void CountChet(const Numbers& nums) {

}


void SumChet(const Numbers& nums) {

}

void showMenu() {
    cout << "\nMenu:\n";
    cout << "1. Ввести число X\n";
    cout << "2. Ввести число Y\n";
    cout << "3. Ввести число Z\n";
    cout << "4. Определить количество четных чисел\n";
    cout << "5. Найти сумму четных чисел\n";
    cout << "0. Выход\n";
    cout << "Выберите пункт меню: ";
}

int main() {
    Numbers nums = {0, 0, 0};
    int choice;

    while (true) {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                getX(nums);
                break;
            case 2:
                getY(nums);
                break;
            case 3:
                getZ(nums);
                break;
            case 4:
                CountChet(nums);
                break;
            case 5:
                SumChet(nums);
                break;
            case 0:
                cout << "Выход из программы." << endl;
                return 0;
            default:
                cout << "Неверный выбор. Попробуйте снова.\n";
        }
    }
    return 0;
}
