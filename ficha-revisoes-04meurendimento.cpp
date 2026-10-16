#include <iostream>

using namespace std;

int main() {

    float ganho,horas,calculomes,calculoano;

    cout << "Quanto ganha por hora: \n";
    cin >> ganho;
    cout << "Quantas horas trabalha por mes: \n";
    cin >> horas;

    calculomes = horas * ganho;
    calculoano = calculomes * 12;

    cout << "Voce ganha " << calculomes << " euros/mes " << "e " << calculoano << " euros/ano";

    return 0;
}

