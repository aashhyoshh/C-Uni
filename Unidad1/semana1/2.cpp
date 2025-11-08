#include <iostream>

using namespace std;

int main() {

    float Dolares, TC , Pesos;
    cout << "Ingrese la cantidad de dolares a convertir: ";
    cin >> Dolares; 

    cout << "Ingrese el tipo de cambio actual: ";
    cin >> TC;

    cout << "La cantidad en pesos es: " << Dolares * TC;
    
}