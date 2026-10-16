#include <iostream>

using namespace std;

int main() {

    string mensagem,nome,local,genero;
    int idade;

    cout << "Diga me o seu nome: ";
    cin >> nome;
    cout << "Diga me a sua idade: ";
    cin >> idade;
    cout << "Diga me a sua localidade: ",
    cin >> local;
    cout << "Diga me o seu genero (M/F): ";
    cin >> genero;

     if (genero == "M") {
        mensagem = "Caro Sr. " + mensagem;
    } else if (genero == "F") {
        mensagem = "Cara Sra. " + mensagem;
    }


    mensagem = mensagem + nome;

    if (idade < 18) {
        mensagem = mensagem + " e menor de idade";
    } else {
        mensagem = mensagem + " e maior de idade";
    }

    mensagem = mensagem + " e mora em " + local;

    cout << mensagem;

    return 0;
}

