#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int area;
    float r, pi = 3.1416;

    cout << "Bienvenido a la calculadora del area de un circulo" << endl;
    cout << "Ingrese el radio del circulo: " << endl;
    cin >> r;

    area = pi * (pow(r, 2));

    if (area % 2 == 0) {
        cout << "El area del circulo es: " << area << " y es un numero par." << endl;
    }
    else {
        cout << "El area del circulo es: " << area << " y es un numero impar." << endl;

    }


    return 0;
}
