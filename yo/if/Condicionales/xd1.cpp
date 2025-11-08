#include <iostream>
using namespace std;

int main(){
 
    int a , b , c;
    cout<<"Ingrese 3 numeros: ";
    cin >> a >> b >> c;

    if (a == b && b == c)
    {
        cout << "Los tres numeros son iguales.";
    }
    else if (a == b || a == c || b == c)
    {
        cout << "Los dos numeros son iguales.";
    }
    else
    {
        cout << "Los numeros son diferentes."<< endl;
    }
    return 0;
}