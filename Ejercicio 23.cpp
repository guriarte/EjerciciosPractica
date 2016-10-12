/* Dado un conjunto de valores, que finaliza con un valor nulo, determinar e
imprimir (si hubo valores):
a) El valor máximo negativo
b) El valor mínimo positivo
c) El valor mínimo dentro del rango -17.3 y 26.9
d) El promedio de todos los valores
*/

#include "funciones.h"

using namespace std;

void ejercicio23()
{
    int ValorMinimoPositivo=0, valorMaximoNegativo=0, valorMinimoRango=0, sumatoria=0, valorActual=1, cantidadNumeros=0;

    cout << "Ingrese valores (0 para terminar): " << endl;

    while(valorActual)
    {
        cin >> valorActual;

        if(valorActual < ValorMinimoPositivo && valorActual > 0)
            ValorMinimoPositivo = valorActual;

        if(valorActual > valorMaximoNegativo && valorActual < 0)
            valorMaximoNegativo = valorActual;

        if(valorActual > -17.3 && valorActual < 26.9)
            if(valorActual < valorMinimoRango)
                valorMinimoRango = valorActual;

        cantidadNumeros++;
        sumatoria += valorActual;
    }

    cout << "El valor máximo negativo es: " << valorMaximoNegativo << endl;
    cout << "El valor mínimo positivo es: " << ValorMinimoPositivo << endl;
    cout << "El valor mínimo dentro del rango -17.3 y 26.9 es: " << valorMinimoRango << endl;
    cout << "El promedio entre los valores es: " << sumatoria/(cantidadNumeros-1) << endl;
}
