
#include <iostream>
#include <string.h>
#include <time.h>

using namespace std;

time_t now = time(NULL);
struct tm *t = localtime(&now);

int opcao;

void menu() {

    cout << "\nO que queres fazer: \n";
    cout << "1 - Mostar o ano \n";
    cout << "2 - Sair do programa \n";
    cin >> opcao;

}


int getYear() {return t->tm_year + 1900; }
int getMonth() {return t->tm_mon + 1; }
int getDay() {return t->tm_mday; }

cout << getYear();

int aMinhaIdade(int ano, int mes, int dia) {
    int aux = getYear() - ano;

    if (getMonth() < mes) {
        aux --;
    } else {
        if (getDay() < dia && getMonth () == mes) {
            aux --;
        }
    }

    return aux;
}

 int ano = getYear();

int main() {

    cout << "a minha idade = ";


    do {
        menu();
        switch(opcao)
            {
                case 1:
                    cout << ano, "\n";
                    break;
                case 2:
                    break;
                default:
                    break;

            }
    } while (opcao != 2);

    return 0;
}


