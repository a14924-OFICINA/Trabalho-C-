#include             <iostream>

using namespace std;


int main() {

    int n, numero[n], soma = 0;

    cout << "Quantos numeros quer somar?: ";
    cin >> n;

    cout << "Digite " << n << " numeros para fazer a sua soma \n";
    for (int i = 0; i < n; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numero[i];
        soma = soma + numero[i];
    }

    cout << "Resultado: " << soma;

    return 0;
}
