#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

// Функция для вычитания одного числа из другого
float subtract(float x, float y) {
    return x - y;
}

// Функция для сложения двух чисел
float add (float x, float y) {
return x + y;
}

// Функция для умножения двух чисел
float multiply(float x, float y) {
return x * y;
}

// Функция для деления одного числа на другое
float divide(float x, float y) {
    if (y != 0) {
        return x / y;
    }
    else {
        cout << "Ошибка: деление на ноль" << endl;
    return 0.0; // Возвращаем 0 в случае ошибки
    }
}

int main ()  {
    char operation;
  setlocale(LC_ALL, "Russian");

    float num1;
    float num2;
    float result;


cout << "Введите число 1:" << endl;
cin >> num1;
cout << "Введите операцию (+, - , *, /) :" << endl;
cin >> operation;
if (operation)
cout << "Введите число 2:" << endl;
cin >> num2;


switch (operation) {
    case '+':
         result = add(num1, num2);
    break;

    case '-':
         result = subtract(num1, num2);
    break;
    case '*':
        result = multiply(num1, num2);
    break;
    case '/':
        result = divide(num1, num2);
    break;
    default:
        cout << "Неверная операция" << endl;
    return 1; // Возврат кода ошибки
}

cout << "Результат:" << result << endl;

return 0;
}

