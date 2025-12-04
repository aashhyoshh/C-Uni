#include <iostream>
using namespace std;

int main() {
    int matriz[3][3];

    // Llenar matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Ingresa [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    cout << "\nMatriz completa:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "[" << matriz[i][j] << "] ";
        }
        cout << endl;
    }

    cout << "\nDiagonal inversa:\n";
    for (int i = 0; i < 3; i++) {
        cout << "[" << matriz[i][2 - i] << "]\n";
    }
}
