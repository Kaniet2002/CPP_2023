#include <iostream>

using namespace std;
int main() {

    setlocale (0, "Russian");
    int chislo1;
    int chislo2;

    cout << "Введите число 1:";
    cin >> chislo1;

    cout << "Введите число 2:";
    cin >> chislo2;

    int quotient = chislo1 / chislo2;  // оператор деления нацело
    int remainder = chislo1 % chislo2; // оператор определения остатка от деления

    cout << "Деление нацело: " << quotient << endl;
    cout << "Остаток от деления: " << remainder << endl;

    return 0;
}
