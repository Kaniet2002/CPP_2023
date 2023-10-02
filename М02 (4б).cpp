#include <iostream> // Вывод в консоль
#include <cmath> // Математические функции
#include <locale> // Локализация, библиотека для добавления русского языка

using namespace std; // Используем namespace std для упрощения кода

// Функция для вычисления площади N-угольника
float get_square(float A, int N) {
    float angle_rad = (2 * 3.14) / N; // Угол в радианах между сторонами
    float rad_cir = A / (2 * tan(angle_rad / 2)); // Радиус вписанной окружности
    float square = 0.5 * N * A * rad_cir; // Площадь N-угольника
    return square;
}

int main() {
    // Поддержка русского языка в консоли
    setlocale(LC_ALL, "Russian");
    // Объявляем переменные
    float A;
    int N;

    // Ввод стороны A и числа сторон N
    cout << "Введите сторону A: ";
    cin >> A;

    cout << "Введите число сторон N: ";
    cin >> N;

    // Проверка на количество углов
    if (N < 3) {
        cerr << "N должно быть не менее 3 для N-угольника." << endl;
        return 0;
    } else {
        // Вычисление и вывод площади N-угольника
        float square = get_square(A, N);
        cout << "Площадь N-угольника: " << square << endl;
        return 0;
    }
}
