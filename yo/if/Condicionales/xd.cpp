#include <iostream>
using namespace std;

int main(){

    int x , y , z;
    cout<<"Ingrese 3 numeros: ";
    cin >> x >> y >> z;

    if (x > y && x > z)
    {
        cout << "El mayor es: " << x ;
    }
    else if (y > x && y > z)
    {
        cout << "El mayor es: " << y ;
    }
    else 
    {
        cout << "El mayor es: " << z ;
    }

    return 0;
}