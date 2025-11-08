#include <iostream>
#include <string>
using namespace std;

/* Tienda de descuentos: calcula el total a pagar según el color de la bolita */

int main() {
    int cantidad;
    float precio, subtotal, total, descuento;
    string color;

    cout << "Ingresa el precio del producto: ";
    cin >> precio;

    cout << "Ingresa la cantidad de productos: ";
    cin >> cantidad;

    subtotal = precio * cantidad;

    cout << "Ingresa el color de la bolita (blanca, amarilla, verde, azul, roja, negra): ";
    cin >> color;

    if (color == "blanca") {
        descuento = 0;
    } 
    else if (color == "amarilla") {
        descuento = subtotal * 0.10;
    } 
    else if (color == "verde") {
        descuento = subtotal * 0.25;
    } 
    else if (color == "azul") {
        descuento = subtotal * 0.35;
    } 
    else if (color == "roja") {
        descuento = subtotal * 0.50;
    } 
    else if (color == "negra") {
        descuento = subtotal;  // compra gratis
    } 
    else {
        cout << "Color no válido. Intenta de nuevo." << endl;
        return 0;
    }

    total = subtotal - descuento;

    cout << "Descuento aplicado: $" << descuento << endl;
    cout << "Total a pagar: $" << total << endl;

}
