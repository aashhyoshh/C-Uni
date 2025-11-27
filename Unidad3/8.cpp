#include <iostream>
using namespace std;

// crea tres arreglos , dos arreglos de 5 numeros y el tercero de 10, se pediran los numeros para llenar los primeros arreglos y con estos llenaremos el tercero 

int main(){

    int arreglo1 [5];
    int arreglo2 [5];
    int arreglo3 [10];

    for (int i = 0; i < 5; i++){
        cout << "Ingresa el numero " << i + 1 << " del primer arreglo: ";
        cin >> arreglo1[i];
    }

    for (int i = 0; i < 5; i++){
        cout << "Ingresa el numero " << i + 1 << " del segundo arreglo: ";
        cin >> arreglo2[i];
    }

    for (int i = 0; i < 5; i++){
        arreglo3[i] = arreglo1[i];
    }
    for (int i = 0; i < 5; i++){
        arreglo3[i+5] = arreglo2[i];
    }
  
    for (int i = 0; i < 10; i++){
        cout << "El tercer arreglo es: " << arreglo3[i]  << endl;
    }

        
}
