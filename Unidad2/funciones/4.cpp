//elabora un programa que calcule el area de un circulo donde una funcion retorne el valor de pi.

#include <iostream>
using namespace std;

    float pi()
        {
            return 3.1416;
        }
    
     int main (){
        float p , area, radio;
            p = pi();
            cout << "Ingrese el radio del circulo: ";
            cin >> radio;
            area = p * radio * radio;
            cout << "El area del circulo es: " << area << endl;
        }