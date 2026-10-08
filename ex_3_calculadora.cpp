#include <iostream>

using namespace std;

int main() {

    float numero1, numero2;
    string conta;
    float calculo;

    cout << "Operacoes possiveis: \n";
    cout << "somar \n";
    cout << "subtrair \n";
    cout << "multiplicar \n";
    cout << "dividir \n";

    cout << "\nQual conta queres fazer?\n";
    cin >> conta;
    cout << "Da me o primeiro numero\n ";
    cin >> numero1;
    cout << "Da me segundo numero\n ";
    cin >> numero2;

    if (conta == "somar") {
        cout << "O resultado e" << (numero1+numero2)
    } else if (conta == "subtrair") {
        cout << "O resulatdo e" << (numero1-numero2)
        } else if
