#include <iostream>

using namespace std;

int main() {

    int a, b, c, mult;

    for (a = 1; a <= 999; a++) {
        for (b = 2; b <= 999; b++) {
            for (c = 3; c <= 999; c++) {
                if (a < b < c && a + b + c == 1000) {
                    if (a * a + b * b == c * c)
                        mult = a * b * c;
                }
            }
        }
    }

    cout << " a*b*c = " << mult << endl;

    return 0;
}