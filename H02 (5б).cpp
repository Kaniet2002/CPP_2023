#include <iostream>


using namespace std;
class Complex { // ����� Complex ������������ ��� ������ � ������������ �������
private:    // � ����� ������ ���� ��� �������� ����� ������:
    double real; // �������������� �����
    double imag; // ������ �����

public: // ������, � ������� ������������ ��������� ����� ������, ������� ����� ���� ������������ ����� ������ Complex
    Complex(double r, double i) : real(r), imag(i) {}

    Complex operator+(const Complex& other) {       // ������ �������� ��������� ���������� ��� ����������� �����.
        return Complex(real + other.real, imag + other.imag);
    }

    Complex operator-(const Complex& other) {       //������ �������� ��������� �������� ��� ����������� �����.
        return Complex(real - other.real, imag - other.imag);
    }

    Complex operator*(const Complex& other) {       //������ �������� ��������� �������� ��� ����������� �����.
        double resultReal = real * other.real - imag * other.imag;
        double resultImag = real * other.imag + imag * other.real;
        return Complex(resultReal, resultImag);
    }

    Complex operator/(const Complex& other) {       //������ �������� ��������� ������ ��� ����������� �����.
        double denominator = other.real * other.real + other.imag * other.imag;
        if (denominator == 0) {
            cerr << "������� �� ����" << endl;
            return Complex(0, 0);
        }
        double resultReal = (real * other.real + imag * other.imag) / denominator;
        double resultImag = (imag * other.real - real * other.imag) / denominator;
        return Complex(resultReal, resultImag);
    }

    void display() {       // display ������������ ��� ������ ������������ ����� � ������� "�������������� ����� + ������ �����i".
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    // ���������� ���������� real1, imag1, real2, � imag2,
    // ����� ��������� ���� ������������ ��� �������������� � ������ ����� ���� ����������� �����.
    double real1, imag1, real2, imag2;
    setlocale (0, "Russian"); // ������������� ������� ����
    cout << "������� �������������� � ������ ����� ������� ������������ �����: ";
    cin >> real1 >> imag1;

    cout << "������� �������������� � ������ ����� ������� ������������ �����: ";
    cin >> real2 >> imag2;

    // ��������� ��� ������� ������ Complex (a � b) � ���������� ����������.
    // ����������� �������� ��������, ���������, ��������� � ������� ���� ����������� �����.
    Complex a(real1, imag1);
    Complex b(real2, imag2);

    Complex sum = a + b;
    Complex diff = a - b;
    Complex product = a * b;
    Complex quotient = a / b;

    // ��� �������� ����� � ���������� �������� ��������� �� �����.

    cout << "a: ";
    a.display();

    cout << "b: ";
    b.display();

    cout << "a + b: ";
    sum.display();

    cout << "a - b: ";
    diff.display();

    cout << "a * b: ";
    product.display();

    cout << "a / b: ";
    quotient.display();

    return 0;
}
