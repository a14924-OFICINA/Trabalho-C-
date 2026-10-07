#include <iostream>

using namespace std;

int main() {

    int opcao;

    for (int i = 0; i<1; i=0) {


        cout << "Escolhe uma opcao\n Sair - 0\n Opcao - 1\n Opcao - 2\n Opcao - 3\n";
        cin >> opcao;


    switch (opcao) {

        case 1:
            cout << "\nE bom programador!\n";
            break;
        case 2:
            cout << "\nE muito bom programador!\n";
            break;
        case 3:
            cout << "\nE excelente programador!\n";
            break;
        case 0:
            cout << "\nSaiu do programa.\n";
            break;
        default:
            cout << "\nNao sei o que me estas a pedir\n";


    }

        if (opcao == 0) break;

    }



    return 0;
}

