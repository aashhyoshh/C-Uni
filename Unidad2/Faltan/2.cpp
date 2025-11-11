#include <iostream>
using namespace std;

int main()
{
    int limite, i = 1, suma = 0;

    cout << "Ingresa hasta que numero quieres contar: ";
    cin >> limite;

    cout << "Numeros pares hasta " << limite << ": " << endl;

    while (i <= limite)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
            suma += i;
        }
        i++;
    }

    cout << "La suma de los numeros pares es: " << suma << endl;
}
