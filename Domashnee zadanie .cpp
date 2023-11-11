#include <iostream>
#include <string>
#include <locale>


using namespace std;

int main() {
    setlocale (0, "Russian");
    string inputString;
    int charCount[26] = {0};
    string alphabet = "abcdefghijklmnopqrstuvwxyz";

    // ���� ������
    cout << "������� ������ �� ����������: ";
    cin >> inputString;

    // ������� ��������� ������ ����� � ������
    for (char c : inputString) {    //  ���� for ���������� ������ ������ c � inputString.
        if (isalpha(c)) {           //������� ������� ���������, �������� �� ������ ������
            charCount[tolower(c) - 'a']++;      //����������� ������� ��� ��������������� �����.
        }
    }

    // ����� �����������
    for (int i = 0; i < 26; ++i) {
        if (charCount[i] > 0) {     // ���������, ��� ����� ����������� � ������.
           cout << "����� '" << alphabet[i] << "' ����������� " << charCount[i] << " ���(�) � ������." << endl;
        }
    }

    return 0;
}
