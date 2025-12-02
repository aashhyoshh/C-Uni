#include <iostream>
using namespace std;

//crea una matriz de 3 por 3 pide que se llenen con numeros y sumalos.

int main(){

    int matriz [3][3];
    int suma = 0;

        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                    cout << "ingresa [" << i << "][" << j << "]: ";
                    cin >> matriz[i][j]; 
                    suma += matriz[i][j];
                    
            }
        }


        cout << "\nLa matriz es: \n";

        for (int i = 0; i <3; i++){
            for (int j = 0; j < 3; j++){
                
                cout << matriz[i][j];
            }
            cout << endl;
        }

        cout << "La suma es: " << suma;


}