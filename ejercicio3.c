#include <stdio.h>

// A partir de un listado de números, determinar el mínimo.

int main(int argc, char const *argv[])
{
    int numeros[] = {1,2,3,-4,6};
    int minimo = numeros[0];

    for (int i = 0; i < sizeof(numeros) / sizeof(int); i++) 
    {
        if (numeros[i] < minimo)
        { 
            minimo = numeros[i];
        }
        
    }

    printf("Minimo: %d", minimo);

    return 0;
}
