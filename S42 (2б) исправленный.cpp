#include <iostream>
#include <algorithm> // ��� ������������� ������� sort
#include <vector>    // ��� ������������� ��������

using namespace std;

/* ��� ������ vector - ��� ������������ ������ ��� ����� ����������� ��� ������,
� ������� ����� ��������� ��� ������� �������� � ����� �����.
�� ������������� ������������� ��� ����������� �� �������, ����� �������� ������.
����� �������,  ��� ����������� � ������������� ��������, ��� � ������ ������� ��������.
� ��� ������ ����� ���� �� ������������ c���������� ������ array.
*/

void customSort(vector<int> arr) {
    int numbers = arr.size();

    for (int coun1 = 0; coun1 <= numbers - 1; coun1++) {
        for (int coun2 = 0; coun2 <= numbers - coun1 - 1; coun2++) {
            if (arr[coun2] <= arr[coun2 + 1]) {
                swap(arr[coun2], arr[coun2 + 1]);
            }
        }
    }

    // ����� ���������������� �������
    for (int num : arr) {
        cout << num << " ";
    }
}

int main() {
    vector<int> numb = {1, 8, 3, 6, 5, 4, 9, 2, 8, 12};
    customSort(numb);

    return 0;
}


