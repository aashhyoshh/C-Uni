#include <iostream>
using namespace std;

// hacer una matriz de 3 por 3 y mostrar los datos que esten en forma diagonal.
        int main() {

            int matriz[3][3];

            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    cout << "ingresa [" << i << "][" << j << "]: ";
                    cin >> matriz[i][j];
                }
            }


            cout << "\nLa matriz es: \n";

                for (int i = 0; i <3; i++){
                    for (int j = 0; j < 3; j++){
                        
                        cout << "[" << matriz [i][j] << "]";
                    }
                    cout << endl;
                }


            cout << "\nLa matriz en forma diagonal es: \n";

            for (int i = 0; i < 1; i++){
                for (int j = 0; j < 1; j++){
                    cout << "[" << matriz [i][j] << "]";
                }
                cout << endl;
            }

            for (int i = 1; i < 2; i++){
                for (int j = 1; j < 2; j++){
                    cout << "[" << matriz [i][j] << "]";
                }
                cout << endl;
            }

            for (int i = 2; i < 3; i++){
                for (int j = 2; j < 3; j++){
                    cout << "[" << matriz [i][j] << "]";
                }
                cout << endl;
            }

        }