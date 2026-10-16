#include <iostream>

using namespace std;

int main() {

    int x,y;
    float z;
    int conta1,conta2,conta3;


    cout << "Da me o valor inteiro de x: \n";
    cin >> x;
    cout << "Da me o valor inteiro de y: \n";
    cin >> y;
    cout << "Da me o valor real de z: \n";
    cin >> z;

    conta1 = (y*2) * (x/2);
    cout << "a multiplicacao do dobro do segundo com metade do primeiro e " << conta1 << endl;
    conta2 = (3*z + x);
    cout << "a soma do triplo do terceiro com o primeiro e " << conta2 << endl;
    conta3 = (z * z * z);
    cout << "o terceiro elevado ao cubo e " << conta3 << endl;

    return 0;
}

