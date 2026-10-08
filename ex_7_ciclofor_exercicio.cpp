#include <iostream>

using namespace std;

int main() {

    /*

    Imprimir a 2x
    Imprimir b 4x
    Imprimir c 6x
    Ficar assim
    "abccba"

    */

    int na, nb, nc;
    string la, lb, lc;

    na = 10;
    nb = 8;
    nc = 2;

    la = "a";
    lb = "b";
    lc = "c";

    // cout << "abccba"

    for (int i=1; i <= na/2; i++) {
        cout << la;
    }
    for (int i=1; i <= nb/2; i++) {
        cout << lb;
    }
    for (int i=1; i <= nc/2; i++) {
        cout << lc;
    }
    for (int i=(nc/2); i < nc; i++) {
        cout << lc;
    }
    for (int i=(nb/2); i < nb; i++) {
        cout << lb;
    }
    for (int i=(na/2); i < na; i++) {
        cout << la;
    }




    return 0;
}

