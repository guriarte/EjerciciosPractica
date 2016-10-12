#include "funciones.h"

using namespace std;

int main()
{
    int ejercicio;

    cout << "Ingrese el numero de ejercicio: " << endl;
    cin >> ejercicio;

    switch(ejercicio)
    {
        case 1:
            ejercicio1();
            break;

        case 2:
            ejercicio2();
            break;

        case 3:
            ejercicio3();
            break;

        case 4:
            ejercicio4();
            break;

        case 5:
            ejercicio5();
            break;

        case 7:
            ejercicio7();
            break;

        case 8:
            ejercicio8();
            break;

        case 10:
            ejercicio10();
            break;

        case 13:
            ejercicio13();
            break;

        case 16:
            ejercicio16();
            break;

        case 17:
            ejercicio17();
            break;

        case 20:
            ejercicio20();
            break;

        case 23:
            ejercicio23();
            break;
    }

}
