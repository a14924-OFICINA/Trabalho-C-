#include <iostream>

using namespace std;

void mostraMsg();
void mudarNum(int &x, int &y);

int main() {
    int a=5, b=3;

    mostraMsg();
    mudarNum(a, b);

    cout << "\n A: " << a << " || B: " << b;

    return 0;
}

void mostraMsg() {
    cout << "Estou a mostrar a funcao mostraMsg";
}

void mudarNum(int &x, int &y) {
    int aux = x;
    x = y;
    y = aux;
}
