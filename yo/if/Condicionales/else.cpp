#include <iostream>
using namespace std;

int main(){

    double Compra, Total;
       cout<< "Ingrese el toal de su compra: ";
       cin >> Compra;

       if ( Compra > 1000) {
         Total = Compra * 0.10;
         cout << " Su compra tiene un 10% de descuento, el total a pagar es: " << Total;
       } else{
          
            cout<< "Su total es de:" << Compra;
       }

       }



