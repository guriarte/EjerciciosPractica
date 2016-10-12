/*
Se dispone de un lote de valores enteros positivos que finaliza con un n�mero
negativo.
El lote est� dividido en sublotes por medio de valores cero. Desarrollar un programa que
determine e informe:
a) por cada sublote el promedio de valores
b) el total de sublotes procesados
c) el valor m�ximo del conjunto, indicando en que sublote se encontr� y la posici�n
relativa del mismo dentro del sublote
d) valor m�nimo de cada sublote
Nota: el lote puede estar vac�o (primer valor negativo), o puede haber uno, varios o todos los
sublotes vac�os (ceros consecutivos)
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
