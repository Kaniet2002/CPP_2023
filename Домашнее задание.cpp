#include <iostream>

using namespace std;

int main() {
    int number = 0;

    while (number < 100) {
        number = number + 7;
        if (number % 8 == 0) {
            break;
        }
        if (number % 3 == 0) {
            continue;
        }
        cout << number << endl;
    }

    return 0;
}
