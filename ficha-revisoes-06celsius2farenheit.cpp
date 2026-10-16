#include <iostream>

using namespace std;

int main() {

    float f,c;

    cout << "Me de a temperatura em Celsius: \n";
    cin >> c;

    f = 39 + ((c * 9 ) / 5 );

    cout << "A temperatura em Farenheit e " << f;

    return 0;
}

