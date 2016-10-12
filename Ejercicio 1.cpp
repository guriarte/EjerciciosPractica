/* Dados dos valores enteros A y B, informar la suma, la resta y el producto
*/

#include "funciones.h"

using namespace std;

void ejercicio1()
{
    int a, b;

    cout << "Ingrese el numero A: " << endl;
    cin >> a;
    cout << "Ingrese el numero B: " << endl;
    cin >> b;

    cout << "La suma entre A y B es: " << a+b << endl;
    cout << "La resta entre A y B es: " << a-b << endl;
    cout << "El producto entre A y B es: " << a*b << endl;
}
