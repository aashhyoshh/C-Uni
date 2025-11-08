#include <iostream>
using namespace std;

/* Programa que calcula el total a pagar aplicando descuento
   según la cantidad de productos comprados. */

int main() {
    int cantidad;
    float precio, subtotal, total;

    cout << "Ingresa el precio del producto: ";
    cin >> precio;

    cout << "Ingresa la cantidad de productos (1, 2 o 3): ";
    cin >> cantidad;

    subtotal = precio * cantidad; // Precio sin descuento

    if (cantidad == 3) {
        total = subtotal * 0.60;  // 40% de descuento (paga 60%)
    } 
    else if (cantidad == 2) {
        total = subtotal * 0.75;  // 25% de descuento (paga 75%)
    } 
    else if (cantidad == 1) {
        total = subtotal;         // Sin descuento
    } 
    else {
        cout << "Solo puedes comprar 1, 2 o 3 productos." << endl;
        return 0; // Sale del programa
    }

    cout << "Total a pagar: $" << total << endl;
}
