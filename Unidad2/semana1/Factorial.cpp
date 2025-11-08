#include <iostream>
using namespace std;

int main (){

int i,factorial, n, anterior;

    cout << "Ingrese un numero: ";
    cin >> factorial;

     n=factorial;

    for (int i = 1 ; i < n; i++ ) 
    {
        cout << factorial;
        cout<< "x";
        anterior = factorial -1;
        factorial= anterior;
    }

}