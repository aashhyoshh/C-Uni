//crea un programa con dos funciones, en la funcion main pediras dos valores , que se compararan para saber cual es el mayor de esos dos numeros.

#include <iostream>
using namespace std;

    void mayor(int a, int b)
        {
            if (a > b)
           
                cout << "El mayor es: " << a << endl;
            
            else
            
                cout << "El mayor es: " << b << endl;
        }

    int main ()
    {
        int a, b;
        cout << "Ingrese el primer numero: ";
        cin >> a;
        cout << "Ingrese el segundo numero: ";
        cin >> b;
        mayor(a,b);
    }