/*
Ingresar e informar valores, mientras que el valor ingresado no sea negativo.
Informar la cantidad de valores ingresados.
*/


#include "funciones.h"

using namespace std;

void ejercicio16()
{
    int cantidad=0;
    float numero=1;

    while(numero >= 0)                                      //while(cin >> n && n >=0){...}
    {
        cout << "Ingrese un numero: " << endl;
        cin >> numero;

        if(numero >= 0)
        {
            cout << "El numero ingresado es: " << numero << endl;
            cantidad++;
        }

    }

    cout << "La cantidad de numeros ingresados fue: " << cantidad << endl;
}
