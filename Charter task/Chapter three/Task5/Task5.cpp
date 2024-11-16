#include <iostream>

using namespace std;

int main() {
	char Sim;
	enum class EType {
		laborer, secretary, manager, accountant, executive, researcher
	};
	cout << "Enter the first letter of the job title (laborer, secretary, manager, accountant, executive, researcher): ";

	cin >> Sim;

	switch (Sim) {
	case 'l': {
		EType Type = EType::laborer;
		cout << "laborer" << " " << static_cast<underlying_type_t<EType>>(Type);
		break;
	}
	case 's': {
		EType Type = EType::secretary;
		cout << "secretary" << " " << static_cast<underlying_type_t<EType>>(Type);
		break;
	}
	case 'm': {
		EType Type = EType::manager;
		cout << "manager" << " " << static_cast<underlying_type_t<EType>>(Type);
	}
	case 'a': {
		EType Type = EType::accountant;
		cout << "accountant" << " " << static_cast<underlying_type_t<EType>>(Type);
		break;
	}
	case 'e': {
		EType Type = EType::executive;
		cout << "executive" << " " << static_cast<underlying_type_t<EType>>(Type);
		break;
	}
	case 'r': {
		EType Type = EType::researcher;
		cout << "researcher" << " " << static_cast<underlying_type_t<EType>>(Type);
		break;
	}
	default:
		cout << "Uncorect";
	}

	return 0;
}