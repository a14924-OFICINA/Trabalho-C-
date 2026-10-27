#include <iostream>

using namespace std;

int main() {

    /* for, while, do.while
            1. somar do nº1 ao 10
            2. subrair do nº11 ao 15
            3. multiplique / divida do nº16 ao 20 (par = dividir / impar = multiplique) */

    int soma;
    int i;
    for (i=1 ; i<=10 ; i++) {
        soma = soma + i;

    }
    i = 11;
    while (i <= 15) {

        soma = soma - i;
        i++;

    }
    do {

        if (((i/2)*2) == i) {
            resultado /= i;
        }else{
            resultado *= 1;
        }

    } while (i<=20);


    cout << soma;


    return 0;
}

