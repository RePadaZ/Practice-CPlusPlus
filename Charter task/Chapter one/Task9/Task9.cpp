#include <iostream>

using namespace std;

int main() {
   
	int funt, shiling, pesso;

	cout << "Input count funt: ";
	cin >> funt;

	cout << "Input count siling: ";
	cin >> shiling;

	cout << "Input count pesso: ";
	cin >> pesso;

	cout << "Decimal pounds: " << funt + ((static_cast<float>(shiling) * 12 + pesso) / 240) << endl;

	return 0;
}