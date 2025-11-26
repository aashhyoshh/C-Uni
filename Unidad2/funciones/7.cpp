#include <iostream>
using namespace std;

//elabora un programa que tenga un menu con dos opciones y su salida , la primera opccion llamara la  funcion saludo,y la segunda opcionn calulara el sueldo de esa persolna.

    void Saludo()
        {
            cout << "Hola trabajador promedio!" << endl;
        }

    void Sueldo(int horas , int precioxH)
    {
        cout << "Tu sueldo es: "  <<  horas * precioxH << endl;
    }

int main (){

    int horas , precioxH = 100 ;
    char opcion;


    do {
        cout << "¿Quieres que te salude?: ";
        cout << "¿Quieres ver tu sueldo de pobre?: ";
        cin >> opcion;

        switch (opcion) {
            case 1 :
                Saludo();
                break;
            case 2 :
                cout << "Ingresa tus horas trabajadas: ";
                cin >> horas;
                Sueldo(horas, precioxH);
                break;

        }

    } while (opcion != '3');
     cout << "Fin del programa." << endl;
}


