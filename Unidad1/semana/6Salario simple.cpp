#include <iostream>
using namespace std;

/* Programa que calcula el salario de un empleado 
   dependiendo de las horas trabajadas. */

int main() {
    int horas;
    float salario;

    cout << "Ingresa el número de horas trabajadas: ";
    cin >> horas;

    if (horas <= 40) {
        salario = horas * 100;
    } else {
        salario = horas * 150;
    }

    cout << "El salario del empleado es: $" << salario << " pesos." << endl;

    return 0;
}
