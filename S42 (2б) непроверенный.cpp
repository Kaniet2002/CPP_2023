#include <iostream>
#include <algorithm> // ��� ������������� ������� sort
#include <vector>    // ��� ������������� ��������

using namespace std;


bool comp (int a, int b) {
    return a > b;
}


int main() {
    vector <int> numbers = {1, 8, 3, 6, 5, 4, 9, 2, 8, 12};

    // ���������� ������� sort ��� ���������� � ������� ��������
    sort(numbers.begin(), numbers.end(), comp );

    // ����� ���������������� �������
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }

    return 0;
}
