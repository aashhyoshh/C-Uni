#include <iostream>

using namespace std;

int main() {

    float Cuenta, Bono, Deposito;
    cout << "Ingrese el deposito realizado: ";
    cin >> Deposito;

    Bono = Deposito * 0.20;

    Cuenta = Deposito + Bono;

    cout << "El bono fue de: " << Bono ;
    
    cout << "El total en la cuenta es: " << Cuenta; 
    
}