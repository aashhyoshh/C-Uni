#include <iostream>
using namespace std;

int main(){

        int arreglo1 [5];
        int arreglo2 [5];
        int arreglo3 [10];

            for (int i = 0; i < 5; i++){
                cout << "Ingresa el numero " << i + 1 << " del primer arreglo: ";
                cin >> arreglo1[i];
            }

            for (int i = 0; i < 5; i++){
                cout <<"Ingresa el numero " << i + 1 << " del segundo arreglo: ";
                cin >> arreglo2[i];
            }

            for (int i = 0; i < 5; i++){
                arreglo3[i] = arreglo1[i];
            }

            for (int i = 0; i <5; i++){
                arreglo3[i+5] = arreglo2[i];
            }

            for (int i = 0; i < 10 - 1; i++) {
    for (int j = 0; j < 10 - 1 - i; j++) {
        if (arreglo3[j] > arreglo3[j + 1]) {
            int temp = arreglo3[j];
            arreglo3[j] = arreglo3[j + 1];
            arreglo3[j + 1] = temp;
        }
    }
}
            for (int i = 0; i < 10; i++){
                cout << "El tercer arreglo es: " << arreglo3[i] << endl;
            }

    return 0;



}