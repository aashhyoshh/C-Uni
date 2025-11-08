#include <iostream>
using namespace std;

int main() {
    int num;
    do {
        cout << "Ingresa un número (0 para salir): ";
        cin >> num;
    } while (num == 0);

    cout << "Programa terminado.";
}
