#include <iostream>
using namespace std;

int main() {
    
    const float funt = 1.487;
    const float frank = 0.172;
    const float nemecFrank = 0.584;
    const float yen = 0.0095;
    float dolar;

    cout << "Input count dolars: ";
    cin >> dolar;

    cout << "Funt: " << dolar / funt << endl;
    cout << "Funt: " << dolar / frank << endl;
    cout << "Funt: " << dolar / nemecFrank << endl;
    cout << "Funt: " << dolar / yen << endl;

    return 0;
}