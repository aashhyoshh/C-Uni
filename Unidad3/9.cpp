#include <iostream>
using namespace std;

// crea un arreglo de 3 y muestra las tablas de multiplicar de esos numeros


int main() {
    int arreglo[3];

    for (int i = 0; i < 3; i++) {
        cout << "Ingresa el numero " << i + 1 << ": ";
        cin >> arreglo[i];
    }

    for (int i = 0; i < 3; i++) 
    {
        cout << "Tabla de multiplicar del " << arreglo[i] << " :" << endl;
         
        for ( int multi = 1; multi <= 10; multi++)
        {
            cout << arreglo[i] << " x " << multi << " = " << arreglo[i] * multi << endl;
        }
    }
}