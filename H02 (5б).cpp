#include <iostream>


using namespace std;
class Complex { // класс Complex предназначен для работы с комплексными числами
private:    // У этого класса есть два закрытых члена данных:
    double real; // действительная часть
    double imag; // мнимая часть

public: // раздел, в котором определяются публичные члены класса, которые могут быть использованы извне класса Complex
    Complex(double r, double i) : real(r), imag(i) {}

    Complex operator+(const Complex& other) {       // данный оператор позволяет складывать два комплексных числа.
        return Complex(real + other.real, imag + other.imag);
    }

    Complex operator-(const Complex& other) {       //данный оператор позволяет вычитать два комплексных числа.
        return Complex(real - other.real, imag - other.imag);
    }

    Complex operator*(const Complex& other) {       //данный оператор позволяет умножать два комплексных числа.
        double resultReal = real * other.real - imag * other.imag;
        double resultImag = real * other.imag + imag * other.real;
        return Complex(resultReal, resultImag);
    }

    Complex operator/(const Complex& other) {       //данный оператор позволяет делить два комплексных числа.
        double denominator = other.real * other.real + other.imag * other.imag;
        if (denominator == 0) {
            cerr << "Деление на ноль" << endl;
            return Complex(0, 0);
        }
        double resultReal = (real * other.real + imag * other.imag) / denominator;
        double resultImag = (imag * other.real - real * other.imag) / denominator;
        return Complex(resultReal, resultImag);
    }

    void display() {       // display используется для вывода комплексного числа в формате "действительная часть + мнимая частьi".
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    // определяем переменные real1, imag1, real2, и imag2,
    // чтобы принимать ввод пользователя для действительной и мнимой части двух комплексных чисел.
    double real1, imag1, real2, imag2;
    setlocale (0, "Russian"); // устанавливаем русский язык
    cout << "Введите действительную и мнимую часть первого комплексного числа: ";
    cin >> real1 >> imag1;

    cout << "Введите действительную и мнимую часть второго комплексного числа: ";
    cin >> real2 >> imag2;

    // Создаются два объекта класса Complex (a и b) с введенными значениями.
    // Выполняются операции сложения, вычитания, умножения и деления этих комплексных чисел.
    Complex a(real1, imag1);
    Complex b(real2, imag2);

    Complex sum = a + b;
    Complex diff = a - b;
    Complex product = a * b;
    Complex quotient = a / b;

    // Все исходные числа и результаты операций выводятся на экран.

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
