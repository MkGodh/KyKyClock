#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int hours;
    int count = 0;
    cout << "Введите который сейчас час: "; cin >> hours;

    while (count != hours) {
        if (hours > 23 || hours <= 0) {
            cout << "Не верное значение!"; break;
        }
        cout << "ку-ку" << "\n";
        count++;
    }






}
