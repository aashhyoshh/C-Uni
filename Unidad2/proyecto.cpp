#include <iostream>
using namespace std;


const double PI = 3.1416;
const double TIPO_CAMBIO = 19.50;

//funciones 

        void areaCirculo(double radio){
            cout << "El area del círculo es: " << radio * radio * PI << endl;
        }

        void areaTriangulo(double base, double altura){
            cout << "El area del triángulo es: " << (base * altura) / 2 << endl;
        }

        void dolaresAPesos(double dolares){
            cout << "En pesos es: " << dolares * TIPO_CAMBIO << endl;
        }

        void centigradosAFahrenheit(double gradosC){
            cout << "La temperatura en Fahrenheit es: " << (gradosC * 9/5) + 32 << endl;
        }

//funciones de los disque menus

        void menuAreas(){
            int Op;
            double radio , altura , base;

            do{
                cout << " --- MENU AREAS --- " << endl;
                cout << "Selecciona una opccion o eres gay" << endl;
                cout << "1.Calcular Circulo" << endl;
                cout << "2.Calcular Triangulo" << endl;
                cout << "3.Volver al menu principal" << endl;
                cin >> Op;

                    switch (Op){

                        case 1: 
                            cout << "Ingrese el Radio: " << endl;
                            cin >> radio;
                                areaCirculo(radio);
                            break;
                        case 2:
                            cout << "Ingrese la base del Triangulo:" << endl;
                            cin >> base;
                            cout << "Ingrese la altura del Triangulo:" << endl;
                            cin >> altura;
                                areaTriangulo(base,altura);
                            break;
                        case 3:
                            cout << "Regresando al menu principal..." << endl;
                            break;
                    }
                }       while (Op != 3);
        }

        void menuConversiones(){
            int op;
            double cantidad, grados;

            do {
                cout << "--- CONVERSIONES ---" << endl;
                cout << "Selecciona una opccion o eres gay" << endl;
                cout << "1. Dolares a Pesos" << endl;
                cout << "2. Centigrados a Fahrenheit" << endl;
                cout << "3. Volver al menu principal" << endl;
                cin >> op;

                switch (op) {
                    case 1:
                        cout << "Ingrese la cantidad en dolares: ";
                        cin >> cantidad;
                            dolaresAPesos(cantidad);
                        break;
                    case 2:
                        cout << "Ingrese los grados centigrados: ";
                        cin >> grados;
                            centigradosAFahrenheit(grados);
                        break;
                    case 3:
                        cout << "Regresando al menu principal..." << endl;
                        break;
                }
            } while (op != 3);
        }




// donde se ve todo

    int main(){

        int op;
        do{
            cout << "--- Menu Principal ---" << endl;
            cout << "Selecciona una opccion o eres gay" << endl << endl;
            cout << "1. Areas" << endl;
            cout << "2. Conversiones" << endl;
            cout << "3. Salir" << endl;
            cout << "opccion:";
            cin >> op;

            

                switch (op){
                    case 1:
                        menuAreas();
                        break;
                    case 2:
                        menuConversiones();
                        break;
                    case 3:
                        cout << "Saliendo del programa..." << endl;
                }
        } while (op != 3);
    }