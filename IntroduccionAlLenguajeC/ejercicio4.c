#include <stdio.h>

// A partir del ingreso de tres enteros determinar el promedio.

int main(int argc, char const *argv[])
{
    int numeros[] = {8, 3, 4, 7};
    int contador;
    int resultado;

    for (int i = 0; i < sizeof(numeros) / sizeof(int); i++)
    {
        contador = contador + numeros[i];
    }
     resultado = contador / (sizeof(numeros) / sizeof(int));

     printf("%d", resultado);

    return 0;
}
