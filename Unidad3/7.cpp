#include <iostream>
using namespace std;

//crea un arreglo de 10 numeros enteros y mustra los numero pares 

int main() {
    int arreglo[10];

        for (int i = 0; i < 10; i++) {
            cout << "Ingresa el numero " << i + 1 << ": ";
            cin >> arreglo[i];
        }

        
        for (int i = 0; i < 10; i++){
            if (arreglo[i] % 2 == 0){
                cout << arreglo[i] << endl;
            }

            cout << "Los numeros pares son: " << arreglo[i] << endl;
        }
}