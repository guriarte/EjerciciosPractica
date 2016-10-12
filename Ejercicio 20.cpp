/*
Dados 10 valores informar el mayor
*/


#include "funciones.h"

using namespace std;

void ejercicio20()
{
    int value[10], i, maxValue;

    cout << "Ingrese 10 valores: " << endl;

    for (i = 0 ; i < 10 ; i++)
        cin >> value[i];

    for(i = 0 ; i < 10 ; i++)
        if (maxValue < value[i])
            maxValue = value[i];

    cout << "El mayor valor de los numeros ingresados es: " << maxValue << endl;
}
