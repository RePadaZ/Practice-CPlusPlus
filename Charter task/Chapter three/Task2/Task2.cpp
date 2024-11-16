#include <iostream>

using namespace std;

int main() {
	struct Point {
		int P1;
		int P2;
		int P3;
	};

	Point PointOne;
	Point PointTwo;

	cout << "Enter point one: ";
	cin >> PointOne.P1 >> PointOne.P2;
	cout << "Enter point two: ";
	cin >> PointTwo.P1 >> PointTwo.P2;
	PointOne.P3 = PointOne.P1 + PointTwo.P1;
	PointTwo.P3 = PointOne.P2 + PointTwo.P2;
	cout << "Point result: P1 + P2: " << PointOne.P3 << " " << PointTwo.P3;
}