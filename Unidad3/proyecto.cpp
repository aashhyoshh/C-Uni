#include <iostream>
using namespace std;

int main() {
            int matriz[3][3];

            cout << "Ingresa los valores de la matriz:\n";
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    cout << "Valor [" << i << "][" << j << "]: ";
                    cin >> matriz[i][j];
                }
            }

            int fila, columna;

            cout << "\n¿Que fila deseas mostrar (0-2)? ";
            cin >> fila;
            cout << "¿Que columna deseas mostrar (0-2)? ";
            cin >> columna;

            cout << "\n===== RESULTADO =====\n";
            cout << "Elemento en [" << fila << "][" << columna << "] = " 
                << matriz[fila][columna] << endl;

                
            cout << "\nLa matriz es: \n";

                for (int i = 0; i <3; i++){
                    for (int j = 0; j < 3; j++){
                        
                        cout << "[" << matriz [i][j] << "]";
                    }
                    cout << endl;
                }


            cout << "\nFila completa " << fila << ": ";
            for (int j = 0; j < 3; j++) {
                cout << matriz[fila][j] << " ";
            }

            cout << "\nColumna completa " << columna << ": ";
            for (int i = 0; i < 3; i++) {
                cout << matriz[i][columna] << " ";
            }

            
}
