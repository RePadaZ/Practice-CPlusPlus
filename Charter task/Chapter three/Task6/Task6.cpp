#include <iostream>

using namespace std;

int main() {
	struct Time {
		int Hour;
		int Minutes;
		int Second;
	};

	Time Time{};

	cout << "Enter hours, minutes and second: ";
	cin >> Time.Hour >> Time.Minutes >> Time.Second;

	cout << "Total second: " << Time.Hour * 3600 + Time.Minutes * 60 + Time.Second;
}