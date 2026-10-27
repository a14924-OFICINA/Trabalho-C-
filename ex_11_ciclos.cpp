#include <iostream>

using namespace std;

int main() {

    int base,exp;
    int soma=1;


        cout << "Da me um numero base:\n";
        cin >> base;
        cout << "Da me um numero expoente:\n";
        cin >> exp;


     while (exp >0) {
        soma = soma * base;
        exp--;
     }

     cout << "Resultado: " << soma;



    return 0;
}

