#include <iostream>
#include <algorithm> // Для использования функции sort
#include <vector>    // Для использования векторов

using namespace std;

/* Тип данных vector - это динамический массив его можно представить как список,
в котором можно добавлять или удалять элементы в любое время.
Он автоматически увеличивается или уменьшается по размеру, чтобы вместить данные.
Таким образом,  нет ограничений и фиксированных размеров, как в случае обычных массивов.
В моём случае можно было бы использовать cтандартный массив array.
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

    // Вывод отсортированного массива
    for (int num : arr) {
        cout << num << " ";
    }
}

int main() {
    vector<int> numb = {1, 8, 3, 6, 5, 4, 9, 2, 8, 12};
    customSort(numb);

    return 0;
}


