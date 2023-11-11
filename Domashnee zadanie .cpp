#include <iostream>
#include <string>
#include <locale>


using namespace std;

int main() {
    setlocale (0, "Russian");
    string inputString;
    int charCount[26] = {0};
    string alphabet = "abcdefghijklmnopqrstuvwxyz";

    // Ввод строки
    cout << "Введите строку на английском: ";
    cin >> inputString;

    // Подсчёт вхождений каждой буквы в строке
    for (char c : inputString) {    //  Цикл for перебирает каждый символ c в inputString.
        if (isalpha(c)) {           //функция которая проверяет, является ли символ буквой
            charCount[tolower(c) - 'a']++;      //увеличивает счетчик для соответствующей буквы.
        }
    }

    // Вывод результатов
    for (int i = 0; i < 26; ++i) {
        if (charCount[i] > 0) {     // проверяет, что буква встречается в строке.
           cout << "Буква '" << alphabet[i] << "' встречается " << charCount[i] << " раз(а) в строке." << endl;
        }
    }

    return 0;
}
