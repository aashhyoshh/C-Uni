#include <iostream>
using namespace std;

int main(){

    int n;

    cout << "Ingrese un numero entre 1 y 5: ";
    cin >> n;

    while (n < 1 || n > 5)
    {
        cout << "Número inválido, intenta otra vez: ";
        cin >> n;
    }

    cout << "¡Perfecto! Ingresaste " << n << ".";
}