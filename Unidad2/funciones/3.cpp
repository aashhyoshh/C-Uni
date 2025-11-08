#include <iostream>
using namespace std;

//Elabora un programa que en la funcion principal pida dos numeros para hacer las cuatro operaciones basicas, cada operacion con su funcion pidiendo los parametros, la division debe mostrar el resultado con decimales si es necesario.

    void sumar(int a, int b)
        {
            cout << "la suma es: " << a + b << endl;
        }

    void restar(int a, int b)
        {
            cout << "la resta es: " << a - b << endl;
        }
    void multiplicar(int a, int b)
    {
        cout << "la multiplicacion es: " << a * b << endl;
    }
    void dividir(float a, float b)
    {
        cout << "la division es: " << a / b << endl;
    }
    
        
        int main (){
            float a, b;
            cout << "Ingrese el primer numero: ";
            cin >> a;
            cout << "Ingrese el segundo numero: ";
            cin >> b;
            sumar(a,b);
            restar(a,b);
            multiplicar(a,b);
            dividir(a,b);
        }
