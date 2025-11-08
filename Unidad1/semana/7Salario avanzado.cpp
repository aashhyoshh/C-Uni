#include <iostream>
using namespace std;

/* Programa que calcula el salario de un empleado 
   según horas normales, dobles y triples. */

int main() {
    int horas;
    float salario;

    cout << "¿Cuántas horas trabajaste?: ";
    cin >> horas;

    if (horas <= 40) {
        salario = horas * 100;
    } 
    else if (horas <= 48) {
        salario = (40 * 100) + (horas - 40) * 200;
    } 
    else {
        salario = (40 * 100) + (8 * 200) + (horas - 48) * 300;
    }

    cout << "El salario total es: $" << salario << " pesos." << endl;
    return 0;
}
