#include <iostream>

using namespace std;

int main() {
	float deposit;
	int year;
	float percent;

	cout << "Enter initial deposit: ";
	cin >> deposit;
	cout << "Enter number yea: ";
	cin >> year;
	cout << "Enter percent: ";
	cin >> percent;

	for (int i = 0; i != year; i++) {
		deposit += (deposit / 100) * percent;
	}

	cout << "Through " << year << " you will receive " << deposit << endl;
	return 0;
}