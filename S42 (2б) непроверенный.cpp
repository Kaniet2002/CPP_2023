#include <iostream>
#include <algorithm> // Для использования функции sort
#include <vector>    // Для использования векторов

using namespace std;


bool comp (int a, int b) {
    return a > b;
}


int main() {
    vector <int> numbers = {1, 8, 3, 6, 5, 4, 9, 2, 8, 12};

    // Используем функцию sort для сортировки в порядке убывания
    sort(numbers.begin(), numbers.end(), comp );

    // Вывод отсортированного массива
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }

    return 0;
}
