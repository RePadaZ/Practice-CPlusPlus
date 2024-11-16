#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int n = 'a';
	long m = 0;

	cout << "Input number: ";

	for (int i = 1; i != 7; i++) {
		n = _getche();

		if (n == '\r') {
			break;
		}

		m = m * 10 + n - 48;
	}

	cout << endl << "You input: " << m;
}