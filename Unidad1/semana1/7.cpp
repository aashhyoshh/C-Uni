#include <iostream>
    using namespace std;

    int main(){

        //Elabora un pseudocodigo y un programa que convierta grados centrigrados a Farenheit

        double C, F;

        cout <<"Ingresa los grados centrigrados: ";
        cin >> C;

        F = (C*9/5)+32;

        cout << "Los grados Farenheit son: " << F;
        cin.get ();
        
    }
