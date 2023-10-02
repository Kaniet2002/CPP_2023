#include <iostream> // ����� � �������
#include <cmath> // �������������� �������
#include <locale> // �����������, ���������� ��� ���������� �������� �����

using namespace std; // ���������� namespace std ��� ��������� ����

// ������� ��� ���������� ������� N-���������
float get_square(float A, int N) {
    float angle_rad = (2 * 3.14) / N; // ���� � �������� ����� ���������
    float rad_cir = A / (2 * tan(angle_rad / 2)); // ������ ��������� ����������
    float square = 0.5 * N * A * rad_cir; // ������� N-���������
    return square;
}

int main() {
    // ��������� �������� ����� � �������
    setlocale(LC_ALL, "Russian");
    // ��������� ����������
    float A;
    int N;

    // ���� ������� A � ����� ������ N
    cout << "������� ������� A: ";
    cin >> A;

    cout << "������� ����� ������ N: ";
    cin >> N;

    // �������� �� ���������� �����
    if (N < 3) {
        cerr << "N ������ ���� �� ����� 3 ��� N-���������." << endl;
        return 0;
    } else {
        // ���������� � ����� ������� N-���������
        float square = get_square(A, N);
        cout << "������� N-���������: " << square << endl;
        return 0;
    }
}
