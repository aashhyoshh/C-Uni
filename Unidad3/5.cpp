#include <iostream>
using namespace std;

// un arreglo de 7 números donde el usuario los ingresa y al final se suman y se muestran en pantalla

int main() {
    int arreglo[7];
    int suma = 0;

        for (int i = 0; i < 7; i++) {
            cout << "Ingresa el numero " << i + 1 << ": ";
            cin >> arreglo[i];
            suma += arreglo[i]; 
        }

    cout << "La suma de todos los numeros es: " << suma << endl;

}
