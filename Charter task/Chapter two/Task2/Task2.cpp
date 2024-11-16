#include <iostream>

using namespace std;

int main() {

	int n;
	float temp;

	cout << "Press 1 to convert Celsius to Fahrenheit or 2 to convert Fahrenheit to Celsius: ";
	cin >> n;

	switch (n) {
		case 1: {
			cout << "Enter the temperature in Celsius: ";
			cin >> temp;
			cout << "Fahrenhei meaning: " << temp * 9 / 5 + 32;
			break;
		}
		case 2: {
			cout << "Enter the temperature in Fahrenhei: ";
			cin >> temp;
			cout << "Fahrenhei meaning: " << (temp - 32) * 5 / 9;
			break;
		}
		default: {
			cout << "You uncorrect input";
		}
	}
	return 0;
}