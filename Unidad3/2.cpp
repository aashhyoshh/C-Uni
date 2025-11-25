#include <iostream>
using namespace std;

//crea un programa que llene un arreglo con los primeros 100 numeros enteros y despues los imprima de forma acendente.

int main (){

    int arreglo[100];

    for (int i = 0; i < 100; i++) {
        arreglo[i] = i + 1;
    }

    for (int i = 0; i < 100; i++) {
        cout << arreglo[i] << endl;
    }

}
