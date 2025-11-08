// Programa que que te diga si el numero es positivo o negativo y ingrese hasat que que ingrese positivo
#include <iostream>
using namespace std;    

int main(){

    int n;
    cout << "Ingrese un numero positivo: ";
    cin >> n;

    while (n > 0)
    {
        cout << "Numero positivo, intenta otra vez: ";
        cin >> n;
    }

    cout << "¡Perfecto! Ingresaste " << n << ".";
}