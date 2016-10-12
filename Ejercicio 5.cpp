/*
Dados dos valores enteros y distintos, emitir una leyenda apropiada que informe cuál es el
mayor entre ellos.
*/

#include "funciones.h"

using namespace std;

void ejercicio5()
{
    int valor1, valor2;

    cout << "Ingrese dos valores: " << endl;
    cin >> valor1 >> valor2;

    if(valor1 == valor2)
        cout << "Los valores son iguales";
    else
        {
            if(valor1 > valor2)
                cout << "El mayor es: " << valor1;
            else
                cout << "El mayor es: " << valor2;
        }
}
