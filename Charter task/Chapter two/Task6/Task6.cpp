#include <iostream>

using namespace std;

int main() {
	unsigned int numb;
	unsigned long fact = 1;
	char oper;
	do {
		cout << "Imput number: ";
		cin >> numb;

		for (int j = numb; j > 0; j--) {
			fact *= j;
		}
		cout << "Factorial number: " << fact << endl << "Calculate another value? (y/n) ";
		cin >> oper;
	} while (oper != 'n');
}