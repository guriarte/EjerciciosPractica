/*
Dado tres valores determinar e imprimir una leyenda según sea: “Forman
triangulo” o “No forman triangulo”.
*/

#include "funciones.h"

using namespace std;

void ejercicio7()
{
    int lado1, lado2, lado3;

    cout << "Ingrese el primer lado: " << endl;
    cin >> lado1;

    cout << "Ingrese el segundo lado: " << endl;
    cin >> lado2;

    cout << "Ingrese el tercer lado: " << endl;
    cin >> lado3;

    if((lado1+lado2 > lado3) && (lado1+lado3 > lado2) && (lado2+lado3 > lado1))
        cout << "Forma un triangulo." << endl;
    else
        cout << "No forma un triangulo." << endl;

}
