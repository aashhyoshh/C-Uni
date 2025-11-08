#include <iostream>
using namespace std;

/* Programa que determina quién es el hermano mayor */

int main() {
    int edad1, edad2; 

    cout << "Ingresa la edad del hermano 1: ";
    cin >> edad1;

    cout << "Ingresa la edad del hermano 2: ";
    cin >> edad2;

    
    if (edad1 > edad2) {
        cout << "El hermano 1 es el mayor con " << edad1 << " años." << endl;
    } 
    else if (edad2 > edad1) {
        cout << "El hermano 2 es el mayor con " << edad2 << " años." << endl;
    } 
    else {
        cout << "Ambos tienen la misma edad." << endl;
    }

    return 0;
}
