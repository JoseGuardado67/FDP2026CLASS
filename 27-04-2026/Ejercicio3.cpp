#include <iostream>
using namespace std;

int main(){
    float temperatura;

    cout << "Ingrese la temperatura en grados Celsius: " << endl;
    cin >> temperatura;

    if(temperatura < 0){
        cout << "La temperatura es fria." << endl;
    }

    else if (temperatura >= 0 && temperatura <= 30){
        cout << "La temperatura es templada." << endl;
    }

    else {
        cout << "La temperatura es caliente." << endl;
    }


    return 0;
}   