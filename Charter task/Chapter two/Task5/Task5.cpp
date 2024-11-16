#include <iostream>

using namespace std;

int main() {
	for (int i = 1; i != 21; i++) {
		for (int b = 0; b < 20 - i; b++) {
			cout << " ";
		}
		for (int j = 1; j < i * 2; j++) {
			cout << 'X';
		}
		cout << endl;
	}
	return 0;
}