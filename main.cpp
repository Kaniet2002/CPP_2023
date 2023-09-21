#include <iostream>


using namespace std;

int main() {
    for (int line = 2; line <= 9; line = line + 1) {
        for (int stolb = 1; stolb <= 10; stolb = stolb + 1) {
            int result = line * stolb;
            cout << line << " * " << stolb << " = " << result << '\t';
        }
        cout << endl;
    }

    return 0;
}
