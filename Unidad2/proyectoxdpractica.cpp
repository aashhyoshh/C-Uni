#include <iostream>
using namespace std;

// Constantes globales
const double PI = 3.1416;
const double TIPO_CAMBIO = 18.50;

// ==== DECLARACIÓN DE FUNCIONES ====
void menuPrincipal();
void menuAreas();
void menuConversiones();

// Funciones de cálculo
double areaCirculo(double radio);
double areaTriangulo(double base, double altura);
double dolaresAPesos(double dolares);
double centigradosAFahrenheit(double gradosC);

// ==== FUNCIÓN PRINCIPAL ====
int main() {
    menuPrincipal();
    return 0;
}

// ==== DEFINICIÓN DE FUNCIONES ====

void menuPrincipal() {
    int opcionPrincipal;
    do {
        cout << "\n========= MENU PRINCIPAL =========" << endl;
        cout << "1. Calculos de Areas" << endl;
        cout << "2. Conversiones" << endl;
        cout << "3. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcionPrincipal;

        switch (opcionPrincipal) {
            case 1:
                menuAreas();
                break;
            case 2:
                menuConversiones();
                break;
            case 3:
                cout << "Saliendo del programa... ¡Hasta luego, Ash!" << endl;
                break;
            default:
                cout << "Opcion invalida. Intente de nuevo." << endl;
        }
    } while (opcionPrincipal != 3);
}

void menuAreas() {
    int opcion;
    double radio, base, altura, resultado;

    do {
        cout << "\n--- CALCULO DE AREAS ---" << endl;
        cout << "1. Area del Circulo" << endl;
        cout << "2. Area del Triangulo" << endl;
        cout << "3. Volver al menu principal" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese el radio del circulo: ";
                cin >> radio;
                resultado = areaCirculo(radio);
                cout << "El area del circulo es: " << resultado << endl;
                break;
            case 2:
                cout << "Ingrese la base del triangulo: ";
                cin >> base;
                cout << "Ingrese la altura del triangulo: ";
                cin >> altura;
                resultado = areaTriangulo(base, altura);
                cout << "El area del triangulo es: " << resultado << endl;
                break;
            case 3:
                cout << "Regresando al menu principal..." << endl;
                break;
            default:
                cout << "Opcion invalida." << endl;
        }
    } while (opcion != 3);
}

void menuConversiones() {
    int opcion;
    double cantidad, resultado;

    do {
        cout << "\n--- CONVERSIONES ---" << endl;
        cout << "1. Dolares a Pesos" << endl;
        cout << "2. Centigrados a Fahrenheit" << endl;
        cout << "3. Volver al menu principal" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese la cantidad en dolares: ";
                cin >> cantidad;
                resultado = dolaresAPesos(cantidad);
                cout << "Equivalente en pesos: $" << resultado << endl;
                break;
            case 2:
                cout << "Ingrese los grados centigrados: ";
                cin >> cantidad;
                resultado = centigradosAFahrenheit(cantidad);
                cout << "Equivalente en Fahrenheit: " << resultado << " °F" << endl;
                break;
            case 3:
                cout << "Regresando al menu principal..." << endl;
                break;
            default:
                cout << "Opcion invalida." << endl;
        }
    } while (opcion != 3);
}

// ==== FUNCIONES DE CÁLCULO ====
double areaCirculo(double radio) {
    return PI * radio * radio;
}

double areaTriangulo(double base, double altura) {
    return (base * altura) / 2;
}

double dolaresAPesos(double dolares) {
    return dolares * TIPO_CAMBIO;
}

double centigradosAFahrenheit(double gradosC) {
    return (gradosC * 9 / 5) + 32;
}
