#include <iostream>
using namespace std;

/* Programa que determina si un número es par o impar */

int main() {
    int numero;

    cout << "Ingresa un número: ";
    cin >> numero;

    if (numero % 2 == 0) {
        cout << "El número es par." << endl;
    } else {
        cout << "El número es impar." << endl;
    }

    return 0;
}
