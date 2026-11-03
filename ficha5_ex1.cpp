#include <iostream>

using namespace std;


int main() {

    const int n = 10;
    int numero[n];
    int soma = 0;

    cout << "Digite 10 numeros para somar os seus quadrados\n"
    for (int i = 0; i < n; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numero[i];
        soma = soma + (numero[i] * numero[i]);
    }

    cout << "Resultado: " << soma;


    return 0;
}
