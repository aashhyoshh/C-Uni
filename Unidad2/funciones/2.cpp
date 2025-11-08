#include <iostream>
using namespace std;


//Realiza un programa en C++ que defina una función llamada "sumar" que tome dos números enteros como parámetros y devuelva su suma.y que pida ingresar los numeros al usuario.

    void sumar(int a, int b)
        {
            cout << "la suma es: " << a + b << endl;
        }

        int main (){
            int a, b;
            cout << "Ingrese el primer numero: ";
            cin >> a;
            cout << "Ingrese el segundo numero: ";
            cin >> b;
            sumar(a,b);
        }