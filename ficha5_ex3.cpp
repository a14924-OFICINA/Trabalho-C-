#include <iostream>

using namespace std;
#define n 13

int main() {

    float ordem[n] = {4, -11, 3.3, -0.1, 1.42, 5.3, 12, 0.4, -1.02, 9, -3.4, 0.5, -2.09};
    float multiplicacao = 1;

    for (int i = 0; i < n; i++) {
        multiplicacao *= ordem[i];
    }
    cout << "Resultado: " << multiplicacao;

    return 0;
}
