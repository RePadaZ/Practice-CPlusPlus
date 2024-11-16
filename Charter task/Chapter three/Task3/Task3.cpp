#include <iostream>

using namespace std;

int main() {
	struct Distance {
		int feet;
		float inches;
	};

	struct Volume {
		Distance D1;
		Distance D2;
		Distance D3;
	};

	float L;
	float W;
	float H;
	Volume room = { {16, 3.5F},{12, 6.25F},{8, 1.75F} };

	L = room.D1.feet + room.D1.inches / 12.0F;
	W = room.D2.feet + room.D2.inches / 12.0F;
	H = room.D3.feet + room.D3.inches / 12.0F;

	cout << L * W * H;
}