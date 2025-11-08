#include <iostream>
#include <string>
using namespace std;

int main() {
    int i, num;
    char opcion;

    do {
        cout << "Ingrese tabla: ";
        cin >> num;

        i = 1;
        while (i <= 10) {
            cout << num << " x " << i << " = " << num * i << endl;
            i++;
        }

        cout << "¿Quieres ver otra tabla? (si/no): ";
        cin >> opcion;

    } while (opcion == 's' || opcion == 'S');

    cout << "Fin del programa." << endl;

    return 0;
}
