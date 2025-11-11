#include <iostream>
using namespace std;


    double promedio(double n1, double n2, double n3)
    {
        return (n1 + n2 + n3) / 3;
    }

        int main()
        {
            double a, b, c;
            cout << "Ingresa calificación 1: ";
            cin >> a;
            cout << "Ingresa calificación 2: ";
            cin >> b;
            cout << "Ingresa calificación 3: ";
            cin >> c;

            double resultado = promedio(a, b, c);

            cout << "El promedio es: " << resultado << endl;

        }
