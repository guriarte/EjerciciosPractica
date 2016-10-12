/*
Dados N y M números naturales, informar su producto por sumas sucesivas.
*/


#include "funciones.h"

using namespace std;

void ejercicio13()
{
    int i, n, m, producto=0;

    cout << "Ingresar dos numeros: " << endl;
    cin >> n >> m;

    for (i = 0 ; i < n ; i++)
        producto += m;

    cout << "El producto entre " << n << " y " << m << " es igual a " << producto << endl;
}
