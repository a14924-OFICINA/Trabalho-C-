#include <stdio.h>
#include <iostream>
using namespace std;

// JOGO 4 EM LINHA //

const int LINHAS = 6;
const int COLUNAS = 9;

void preencheTabuleiro(string arr[LINHAS][COLUNAS]);
void mostraTabuleiro(string arr[LINHAS][COLUNAS]);
int pedePecaJogador();
bool colocaPecaTabuleiro(string peca, int coluna, string arr[LINHAS][COLUNAS]);
bool tabuleiroCheio(string arr[LINHAS][COLUNAS]);
bool ganhouJogo(int &quemGanhou, string arr[LINHAS][COLUNAS]);


int main() {
    string tabuleiro[LINHAS][COLUNAS];
    int quemJoga=1; // 1-X - 1º jogar // 2-O - 2ºjogar !
    int quemGanhou=0;
    int colunaJogar = 0;
    bool jogou = false;

    preencheTabuleiro(tabuleiro);
    tabuleiro[2][1] = "s";


    do {
        mostraTabuleiro(tabuleiro);
        colunaJogar = pedePecaJogador();
        jogou = colocaPecaTabuleiro("X", colunaJogar, tabuleiro);
    } while (!ganhouJogo(quemGanhou, tabuleiro) && !tabuleiroCheio(tabuleiro));

    /*tabuleiro[0][1] = "s";
    mostraTabuleiro(tabuleiro);
    mostraTabuleiro(tabuleiro);*/


    return 0;
}

void preencheTabuleiro(string arr[LINHAS][COLUNAS]) {
    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            arr[i][j] = " ";
        }
    }
}

void mostraTabuleiro(string arr[LINHAS][COLUNAS]) {
    cout << "\n **** 4 em Linha *** \n\n";
    for (int i=LINHAS - 1; i>=0; i--) {
        cout << "|";
        for(int j=0; j<COLUNAS; j++) {
            cout << arr[i][j] << "|";
        }
        cout << "\n";
    }
    cout << "|";
    for(int j=0; j<COLUNAS; j++) {
            cout << "-" << "|";
        }
    cout << "\n";
    cout << "|";
    for(int j=0; j<COLUNAS; j++) {
            cout << j << "|";
        }
    cout << "\n";


}

    /*cout << "\nLinha 1: Coluna 2: -"  << arr[0][1] << "-";
    arr[0][1] = "a";*/


int pedePecaJogador() {
    int col;
    col = col - 1;
    cout << "\nEscolhe um coluna entre 1-9\n";
    cout << "Onde queres jogar? ";
    cin >> col;
    if (col > 9) {
        cout << "\nColuna invalida.\n";
    } else if (col <= 0) {
        cout << "\nColuna invalida.\n";
    } else {
        cout << "\nColuna " << col << " escolhida.\n"
    }

    return 0;
}

bool colocaPecaTabuleiro(string peca, int coluna, string arr[LINHAS][COLUNAS]) {

    return false;
}

bool tabuleiroCheio(string arr[LINHAS][COLUNAS]) {
    return false;
}

bool ganhouJogo(int &quemGanhou, string arr[LINHAS][COLUNAS]) {
    return false;
}



