#include <iostream>

using namespace std;

int soma;
float divide2num(float numero1, float numero2) {
    return numero1 / numero2;
 }

int main() {

    int n1, n2;

    cout << "Digite 2 numeros para fazer a sua divisao: \n" << "Numero 1: ";
    cin >> n1;
    cout << "Numero 2: ";
    cin >> n2;
    cout << "Resultado: " << divide2num(n1, n2);

    return 0;
}
