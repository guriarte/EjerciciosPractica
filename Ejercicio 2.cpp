/*
Dada una terna de números naturales que representan al día, al mes y al año de una
determinada fecha informarla como un solo número natural de 8 dígitos con la forma
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
