/*
Informar los primeros 100 números naturales y su sumatoria
*/


#include "funciones.h"

using namespace std;

void ejercicio10()
{
    int i, sumatoria=0;

    for(i = 1 ; i <= 100 ; i++)
        sumatoria += i;

    cout << "La sumatoria de 1 a 100 es: " << sumatoria;
}
