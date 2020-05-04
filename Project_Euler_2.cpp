#include <iostream>

using namespace std;

int main() {

    int aux, sum = 0, a = 1, b = 1;
    while (true) {
        aux = a + b;
        a = b;
        b = aux;
        if (aux >= 4000000)
            break;
        if (aux % 2 == 0)
            sum += aux;
    }
    cout << "suma: " << sum << endl;

    return 0;
}