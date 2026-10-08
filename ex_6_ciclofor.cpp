#include <iostream>

using namespace std;

int main() {


    cout << "Numeros de 1 a 10:\n";
    for(int i=1; i<=10; i++) {
        cout << i << endl;
    }

    cout << "\nNumeros impares de 1 a 10:\n";
    for(int i=1; i<10; i = i+2) {
        cout << i << endl;
    }

    cout << "\nNumeros impares de 1 a 5:\n";
    for(int i=1; i<10; i = i+2) {

        cout << i << endl;
        if (i >= 5) break;
    }


    return 0;
}

