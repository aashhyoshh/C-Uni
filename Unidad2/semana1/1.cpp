#include <iostream>
using namespace std;

//Elabora un programa que sume numeros hasta que se ingrese un cero;

int main (){

int i, suma = 0;

    cout << "Ingrese numeros para sumar , 0 para terminar: " << endl;
    cin >> i;

    while (i != 0)
    {
        suma = suma + i;
        cin >> i;
    }
    cout << "El total es: " << suma << endl;

}