#include <iostream>

using namespace std;

bool esPrimo(int a) {
	for (int i = 2; i <= (a / 2); i++)
		if (a % i == 0)
			return false;
	return true;
}

int main(){

	long long sum = 0;
	for (int i = 2; i < 2000000; i++)
		if (esPrimo(i)) {
			sum += i;
			cout << i << endl;
		}

	cout << "la suma es: " << sum << endl;

	return 0;
}