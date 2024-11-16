#include <iostream>

using namespace std;

int main() {
	struct Time {
		int Hour;
		int Minute;
		int Second;
	};

	Time TimeOne;
	Time TimeTwo;

	cout << "Enter hours, minutes and second for time one: ";
	cin >> TimeOne.Hour >> TimeOne.Minute >> TimeOne.Second;

	cout << "Enter hours, minutes and second for time two: ";
	cin >> TimeTwo.Hour >> TimeTwo.Minute >> TimeTwo.Second;

	cout << "Total second: " << (TimeOne.Hour * 3600 + TimeOne.Minute * 60 + TimeOne.Second) + (TimeTwo.Hour * 3600 + TimeTwo.Minute * 60 + TimeTwo.Second);
	cout << "Time format: " << (TimeOne.Hour + TimeTwo.Hour) % 100 << ":" << (TimeOne.Minute + TimeTwo.Minute) % 100 << ":" << (TimeOne.Second + TimeTwo.Second) % 100;
}