#include <iostream>
using namespace std;

//crea un arreglo de 10 numero y los numeros que tiene que guardar son de 3 en 3 empezando desde el 3 hasta que se llene el arreglo


int main() {
    int arreglo[10];

    int valor = 3; 

    for (int i = 0; i < 10; i++) {
        arreglo[i] = valor;
        valor += 3; 
    }

    for (int i = 0; i < 10; i++) {
        cout << arreglo[i] << endl;
    }

}
