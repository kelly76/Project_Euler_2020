#include <iostream>

using namespace std;

int main() {

    int a = 20;

    while (true) {
        if ( a % 7 == 0 && a % 11 == 0 && a % 12 == 0 && a % 13 == 0 && a % 14 == 0 && a % 15 == 0 && a % 16 == 0 && a % 17 == 0 && a % 18 == 0 && a % 19 == 0 && a % 20 == 0)
            break;
        else
            a = a + 1;
    }

    cout << a << endl;

    return 0;
}
