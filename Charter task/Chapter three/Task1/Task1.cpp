#include <iostream>

using namespace std;

int main() {
	struct Phone {
		int CodeCity;
		int NumberStation;
		int NumberAbonent;
	};

	Phone MyPhone{ 212, 767, 8900 };
	Phone YourPhone{};

	cout << "Enter city number, number station and number abonent: ";
	cin >> YourPhone.CodeCity >> YourPhone.NumberStation >> YourPhone.NumberAbonent;
	cout << "My number: (" << MyPhone.CodeCity << ") " << MyPhone.NumberStation << "-" << MyPhone.NumberAbonent << endl;
	cout << "Your number: (" << YourPhone.CodeCity << ") " << YourPhone.NumberStation << "-" << YourPhone.NumberAbonent << endl;
	return 0;
}