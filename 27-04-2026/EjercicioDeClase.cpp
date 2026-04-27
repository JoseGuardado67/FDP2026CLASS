#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int y, x;

    cout << "Please enter a number: " <<endl;
    cin >> y;

    x= pow ( y, y );

    //numero par o impar
    if (x % 2 == 0){
        cout <<"The Number: " << x << " is even." << endl;
    }
    else {
        cout << "The number: " << x << "is odd." <<endl;
    }

    return 0;
}
