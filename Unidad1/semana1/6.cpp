    #include <iostream>
    using namespace std;

    int main(){
    
    //En una agencia de viajes se desea saber cuanto pagara un cliente por un vuelo. Para obtenerlo se debe tomar en cuenta lo siguente los vuelos tienen un costo de 3 pesos por Km recorrido. Se debe mostrar el total a pagar y el nombre del cliente.

    char Nombre [30];
    cout << "Ingresa tu nombre:";
    cin >> Nombre;

    double Km, Costo = 3, Total;
    
    cout <<"Ingresa los Km a recorrer: ";
    cin >> Km;

    Total = (Km * Costo);


    cout << "Tu nombre es:" << Nombre << endl;
    cout << "Tu total a pagar por el vuelo es:" << Total;
   

    cin.get ();
    
}