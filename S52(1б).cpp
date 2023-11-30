#include <iostream>

using namespace std;

int print(int value) {
    cout << value << endl;
}

float print(float value) {
    cout << value << endl;
}

char print(char value) {
    cout << value << endl;
}

int print(int value1, int value2) {
    cout << value1 << ", " << value2 << endl;
}

int main() {
    int intValue = 42;
    float floatValue = 3.14;
    char charValue = 'A';
    int intValue1 = 10;
    int intValue2 = 20;

    print(intValue);            // Вызов функции с int
    print(floatValue);          // Вызов функции с float
    print(charValue);           // Вызов функции с char
    print(intValue1, intValue2); // Вызов функции с двумя int

    return 0;
}
