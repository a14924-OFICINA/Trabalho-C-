#include <iostream>

using namespace std;

#define NLETRAS 10

// so maiusculas, palavra max de 10 letras
// 5 tentativas
int numTentativas = 5;

void mostrarGrelha(char pl[NLETRAS]) {
    cout << "\n";
    for (int i = 0; i < NLETRAS; i++) {
        if (pl[i] != ' ') {
            cout << "_" << " ";
        }
    }
}

int main() {

    bool jogoGanho = false;
    char letra;
    char palavra[NLETRAS] = {'C', 'A', 'S', 'A', ' ', ' ', ' ', ' ', ' ', ' '};

    while (numTentativas > 0) {
        mostrarGrelha(palavra);

        cout << "\n\nRestam " << numTentativas << " tentativas";
        cout << "\n\nDiga a Letra que queres verificar: ";
        cin >> letra;
        numTentativas--;
    }

    cout << "\n\n--------------------------";
    if (jogoGanho) {
        cout <<"\n Ganhaste um jogo.... parabens";
    } else {
        cout <<"\n\nNunca vais valer para nada\n";
    }


    return 0;
}
