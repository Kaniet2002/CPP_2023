#include <iostream>

using namespace std;
int main() {

    setlocale (0, "Russian");
    int chislo1;
    int chislo2;

    cout << "������� ����� 1:";
    cin >> chislo1;

    cout << "������� ����� 2:";
    cin >> chislo2;

    int quotient = chislo1 / chislo2;  // �������� ������� ������
    int remainder = chislo1 % chislo2; // �������� ����������� ������� �� �������

    cout << "������� ������: " << quotient << endl;
    cout << "������� �� �������: " << remainder << endl;

    return 0;
}
