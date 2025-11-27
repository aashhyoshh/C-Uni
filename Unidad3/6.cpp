#include <iostream>
using namespace std;

// Un programa que crea un arreglo de 8 números ingresados por el usuario y muestra el número mayor y el número menor

int main() {
    int arreglo[8];
    int mayor, menor;

    for (int i = 0; i < 8; i++) {
        cout << "Ingresa el numero " << i + 1 << ": ";
        cin >> arreglo[i];
    }

    mayor = menor = arreglo[0];

    for (int i = 1; i < 8; i++) {
        if (arreglo[i] > mayor) {
            mayor = arreglo[i];
        }
        if (arreglo[i] < menor) {
            menor = arreglo[i];
        }
    }

    cout << "El numero mayor es: " << mayor << endl;
    cout << "El numero menor es: " << menor << endl;

}
