#include <iostream>
using namespace std;

/* Programa que ordena dos números en orden ascendente */

int main() {
    int num1, num2;

    cout << "Ingresa el primer número: ";
    cin >> num1;

    cout << "Ingresa el segundo número: ";
    cin >> num2;

    if (num1 > num2) {
        cout << "El orden ascendente es: " << num2 << ", " << num1 << endl;
    } else if (num1 < num2) {
        cout << "El orden ascendente es: " << num1 << ", " << num2 << endl;
    } else {
        cout << "Ambos números son iguales." << endl;
    }

    return 0;
}
