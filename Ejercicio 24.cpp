/*
Se dispone de un lote de valores enteros positivos que finaliza con un número
negativo.
El lote está dividido en sublotes por medio de valores cero. Desarrollar un programa que
determine e informe:
a) por cada sublote el promedio de valores
b) el total de sublotes procesados
c) el valor máximo del conjunto, indicando en que sublote se encontró y la posición
relativa del mismo dentro del sublote
d) valor mínimo de cada sublote
Nota: el lote puede estar vacío (primer valor negativo), o puede haber uno, varios o todos los
sublotes vacíos (ceros consecutivos)
*/


#include "funciones.h"

using namespace std;


void ejercicio24()
{
    cout << "Ingrese un valor: " << endl;
    cin >> valorActual;

    if(valorActual > 0)
    {
       cantidadValoresLoteActual++;
       valorTotalLoteActual += valorActual;

       if(valorActual > valorMaximoTotal)
       {
           valorMaximoTotal = valorActual;
           posicionMaximoTotal = cantidadValoresLoteActual;
           loteMaximoTotal = cantidadLotesActual;
       }

    }
}
