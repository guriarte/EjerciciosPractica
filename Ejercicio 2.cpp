/*
Dada una terna de n�meros naturales que representan al d�a, al mes y al a�o de una
determinada fecha informarla como un solo n�mero natural de 8 d�gitos con la forma
(AAAAMMDD).
*/


#include "funciones.h"

using namespace std;

void ejercicio2()
{
    int dia, mes, anio;

    cout << "Ingrese el dia: " << endl;
    cin >> dia;

    cout << "Ingrese el mes: " << endl;
    cin >> mes;

    cout << "Ingrese el anio: " << endl;
    cin >> anio;

    cout << "La fecha es: " << anio << mes << dia << endl;
}
