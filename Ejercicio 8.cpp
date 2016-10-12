/*
Dado un triángulo representado por sus lados L1, L2, L3, determinar e imprimir
una leyenda según sea: equilátero, isósceles o escálenos.
*/



#include "funciones.h"

using namespace std;

void ejercicio8()
{
    int lado1, lado2, lado3;

    cout << "Ingrese el primer lado: " << endl;
    cin >> lado1;

    cout << "Ingrese el segundo lado: " << endl;
    cin >> lado2;

    cout << "Ingrese el tercer lado: " << endl;
    cin >> lado3;

    if((lado1 == lado2) && (lado2 == lado3) && (lado1==lado3))
        cout << "Es un triangulo equilatero." << endl;

    if(((lado1 == lado2) && (lado2 != lado3)) || ((lado2 == lado3) && (lado2 != lado1)) || ((lado1 == lado3) && (lado1 != lado2)))
        cout << "Es un triangulo isosceles." << endl;

    if((lado1 != lado2) && (lado2 != lado3) && (lado1!=lado3))
        cout << "Es un triangulo escaleno." << endl;
}
