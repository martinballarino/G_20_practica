#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv)
{
    /* 1
    int* p, * q;
     p = new int();
     q = new int();
     *p = -1;
     *q = -1;

     cout << "Ingresar dos n�meros enteros: " << endl;
     cin >> *q >> *p;
     if (*p <= *q)
         cout << "el n�mero m�ximo es: " << *q << endl;
     else
         cout << "el numero maximo es: " << *p << endl;

     delete p;
     delete q;

     1*/

    int N, i;
    int max;
    int *array;
    cout << "ingrese cantidad de numeros" << endl;
    cin >> N;
    array = new int[N];
    for (i = 0; i < N; i++)
    {

    }



    return EXIT_SUCCESS;

}
/*
Realice un programa utilizando memoria din�mica para encontrar el m�ximo n�mero
en un array de N elementos, dado el valor N por teclado. Genere los N elementos
con random.
*/
