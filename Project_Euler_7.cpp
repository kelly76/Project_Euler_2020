#include <iostream>

using namespace std;

bool esPrimo(int a) {
	for (int i = 2; i <= (a / 2) ; i++)
		if (a % i == 0)
			return false;
	return true;
}

int main() {

	int a=1;
	int cont=0;

	while (cont < 10001) {
		a++;
		if (esPrimo(a)) 
			cont += 1;
	}

	cout<<"El 10001 primo es: "<< a << endl;

	return 0;
}