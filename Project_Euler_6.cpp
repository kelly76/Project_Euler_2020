#include <iostream>

using namespace std;

int main() {

    int sum1 = 0;     //suma de los cuadrados
    int sum2 = 0;     //cuadrado de la suma

    for (int i = 1; i <= 100; i++) {
        sum1 += (i*i);
        sum2 += i;
    }

    cout <<"la diferencia es: "<< (sum2 * sum2) - sum1  << endl;

    return 0;
}