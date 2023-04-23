#include <stdio.h>

//A partir de un listado de números, determinar el máximo.

int main(int argc, char const *argv[])
{
    int numeros[] = {1,2,3,4,6};
    int maximo = numeros[0];

    for (int i = 0; i < sizeof(numeros) / sizeof(int); i++)  // ver porque se divide por sizeof(int)
    {
        if (numeros[i] > maximo)
        {
            maximo = numeros[i];
        }
        
    }

    printf("Máximo: %d", maximo);

    return maximo;
}
