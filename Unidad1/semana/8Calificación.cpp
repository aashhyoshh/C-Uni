#include <iostream>
using namespace std;

/* Programa que solicita una calificación del 0 al 100,
   y muestra si el alumno aprobó o reprobó. */

int main() {
    int calificacion;

    cout << "Ingresa tu calificación: ";
    cin >> calificacion;

    if (calificacion >= 60) {
        cout << "¡Aprobaste!" << endl;
    } else {
        cout << "¡Reprobaste!" << endl;
    }
}
