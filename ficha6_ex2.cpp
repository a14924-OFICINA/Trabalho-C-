#include <iostream>

using namespace std;

int soma;
int soma2num(int numero1, int numero2) {
    soma = numero1 + numero2;
    return soma;
 }

int main() {

    int n1, n2;

    cout << "Digite 2 numeros para fazer a sua soma: \n" << "Numero 1: ";
    cin >> n1;
    cout << "Numero 2: ";
    cin >> n2;
    cout << "Resultado: " << soma2num(n1, n2);

    return 0;
}
