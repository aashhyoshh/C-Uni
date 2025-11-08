#include <iostream>
using namespace std;

int main() {

    int num1, num2, num3;

    cout << "Ingrese primer número: ";
    cin >> num1;
    cout << "Ingrese segundo número: ";
    cin >> num2;
    cout << "Ingrese tercer número: ";
    cin >> num3;

    if (num1 > num2 && num1 > num3)
    {
        if (num2 > num3)
        {
            cout << "El orden es: " << num1 << ", " << num2 << ", " << num3;
        }
        else
        {
            cout << "El orden es: " << num1 << ", " << num3 << ", " << num2;
        }
    }
    else if (num2 > num1 && num2 > num3)
    {
        if (num1 > num3)
        {
            cout << "El orden es: " << num2 << ", " << num1 << ", " << num3;
        }
        else
        {
            cout << "El orden es: " << num2 << ", " << num3 << ", " << num1;
        }
    }
    else
    {
        if (num1 > num2)
        {
            cout << "El orden es: " << num3 << ", " << num1 << ", " << num2;
        }
        else
        {
            cout << "El orden es: " << num3 << ", " << num2 << ", " << num1;
        }
    }

    return 0;
}
