#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	long nOne;
	long nTwo;
	char oper;

	do {
		cout << "Enter the first operand, the operation, and the second operand: ";
		cin >> nOne >> oper >> nTwo;

		switch (oper) {
		case '+': {
			cout << endl << "Result: " << nOne + nTwo;
			break;
		}
		case '-': {
			cout << endl << "Result: " << nOne - nTwo;
			break;
		}

		case '/': {
			cout << endl << "Result: " << nOne / nTwo;
			break;
		}

		case '*': {
			cout << endl << "Result: " << nOne * nTwo;
			break;
		}

		default:
			cout << "Unknown operand";
			break;
		}
		cout << endl << "Perform another operation? (y/n) ";
		cin >> oper;
	} while (oper != 'n');

	return 0;
}