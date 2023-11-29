#include <iostream>
using namespace std;



int main() {
    setlocale (0, "Russian");
    int sum = 0;
    
    for (int i = 1; i <= 1000; i = i + 4) {
        if (i % 7 == 0) {
            sum = sum + i;
        }
    }
    
        cout << "Сумма чисел, которые делятся на 7 без остатка: " << sum << endl;
    
    return 0;
}
