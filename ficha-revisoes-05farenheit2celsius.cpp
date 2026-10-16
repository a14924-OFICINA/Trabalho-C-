#include <iostream>

using namespace std;

int main() {

    float f,c;

    cout << "Me de a temperatura de Farenheit: \n";
    cin >> f;

    c = (5 * (f-32) / 9);

    cout << "A temperatura em Celsius e " << c;

    return 0;
}

