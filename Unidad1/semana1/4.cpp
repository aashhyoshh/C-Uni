# include <iostream>
using namespace std;

// Programa y elabora un pseudocódigo que calcule el area de un circulo 
int main() {
   float Area, Radio, Pi = 3.1416;
   cout << "Ingrese el Radio del circulo: ";
   cin >> Radio;

   Area = Pi * (Radio * Radio);
   cout << " El area de l circulo es: " << Area;

   cin.get();
}