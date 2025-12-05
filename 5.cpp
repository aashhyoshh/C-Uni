#include <iostream>
using namespace std;

int main(){

    int matriz [3][3];
    int sumaCol = 0;

        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                cout << "Ingresa  [" << i << "][" << j << "]";
                cin >> matriz[i][j];
            } 
        }


        cout << "\nLa matriz es: \n";
        for (int i = 0; i <3; i++){
            for (int j = 0; j < 3; j++){
                
                cout << "[" << matriz[i][j] << "] ";
            }
            cout << endl;
        }

        
        for (int j = 0; j < 3; j++){
            sumaCol = 0;
            for (int i = 0; i < 3; i++){
                sumaCol += matriz[i][j];
            }
            cout << "La suma de la columna " << j << " es: " << sumaCol << endl;
        }


}