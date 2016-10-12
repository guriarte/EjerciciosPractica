/*
Se ingresa un conjunto de valores float, cada uno de los cuales representan el
sueldo de un empleado, excepto el último valor que es cero e indica el fin del conjunto. Se pide
desarrollar un programa que determine e informe:
a) Cuántos empleados ganan menos $1.520.
b) Cuántos ganan $1.520 o más pero menos de $2.780.
c) Cuántos ganan $2.780 o más pero menos de $5.999.
d) Cuántos ganan $5.999 o más.
*/

#include "funciones.h"

using namespace std;

void ejercicio17()
{
    int claseD=0, claseC=0, claseB=0, claseA=0;
    float sueldo;

    cout << "Ingrese los sueldos: " << endl;

    while (cin >> sueldo && sueldo != 0)
    {
        if(sueldo < 1520)
            claseD++;

        if(sueldo >= 1520 && sueldo < 2780)
            claseC++;

        if(sueldo >= 2780 && sueldo < 5999)
            claseB++;

        if (sueldo >= 5999)
            claseA++;
    }

    cout << "La cantidad de personal que gana menos de $1520 es: " << claseD << endl;
    cout << "La cantidad de personal que gana entre 1520 y 2780 es: " << claseC << endl;
    cout << "La cantidad de personal que gana entre 2780 y 5999 es: " << claseB << endl;
    cout << "La cantidad de personal que gana igual o mas de 5999 es: " << claseA << endl;

}
