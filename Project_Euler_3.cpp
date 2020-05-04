#include <iostream>

using namespace std;

int main() {

	long long a= 600851475143;
	long long mayor=1;

	while (a > 1) {
		for (long long i = 2; i <= a; i++) {
			if (a % i == 0 ) {
				a = a / i;
				if (i > mayor) 
					mayor = i;
			}
		}
	}

	cout <<"el mayor es: "<< mayor << endl;

	return 0;
}