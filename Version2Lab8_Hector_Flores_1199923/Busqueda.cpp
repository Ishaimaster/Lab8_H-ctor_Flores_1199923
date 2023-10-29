#include "Busqueda.h"

int Busqueda::Buscador(int array[], int busq[])
{
    int tamano = 50;
    int contadorE = 0;

    for (int i = 0; i < tamano; i++)
    {
        for (int j = 0; j < 100; j++)
        {

            if (busq[i] == array[j])
            {
                contadorE++;
                

            }

        }

    }

    return contadorE;
}