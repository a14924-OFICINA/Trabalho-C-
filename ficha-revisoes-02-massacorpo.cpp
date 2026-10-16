#include <iostream>

using namespace std;

int main() {

    float peso, adagrav, massa;

    cout << "Da me o valor do peso: \n";
    cin >> peso;
    cout << "Da me o valor da aceleracao da gravidade: \n";
    cin >> adagrav;

    massa = peso/adagrav;

    cout << "A sua massa e " << massa << "kg";

    return 0;
}

