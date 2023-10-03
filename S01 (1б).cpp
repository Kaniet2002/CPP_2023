#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

// ������� ��� ��������� ������ ����� �� �������
float subtract(float x, float y) {
    return x - y;
}

// ������� ��� �������� ���� �����
float add (float x, float y) {
return x + y;
}

// ������� ��� ��������� ���� �����
float multiply(float x, float y) {
return x * y;
}

// ������� ��� ������� ������ ����� �� ������
float divide(float x, float y) {
    if (y != 0) {
        return x / y;
    }
    else {
        cout << "������: ������� �� ����" << endl;
    return 0.0; // ���������� 0 � ������ ������
    }
}

int main ()  {
    char operation;
  setlocale(LC_ALL, "Russian");

    float num1;
    float num2;
    float result;


cout << "������� ����� 1:" << endl;
cin >> num1;
cout << "������� �������� (+, - , *, /) :" << endl;
cin >> operation;
if (operation)
cout << "������� ����� 2:" << endl;
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
        cout << "�������� ��������" << endl;
    return 1; // ������� ���� ������
}

cout << "���������:" << result << endl;

return 0;
}

