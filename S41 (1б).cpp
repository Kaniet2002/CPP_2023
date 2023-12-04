#include <iostream>

using namespace std;
double squared_sum(double x, double y) {
    double sum = x + y;
    double squaredSum = sum * sum;
    return squaredSum;
}

int main() {
    setlocale (0, "Russian");
    double num1, num2;
    cout << "¬ведите первое число: ";
    cin >> num1;
    cout << "¬ведите второе число: ";
    cin >> num2;

    double result = squared_sum(num1, num2);
    cout << " вадрат суммы чисел: " << result << endl;

    return 0;
}
