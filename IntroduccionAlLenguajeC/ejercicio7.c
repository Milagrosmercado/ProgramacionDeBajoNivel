#include <stdio.h>


/*
Diseñar un menú navegable donde cada opción muestre una frase
distinta. Debe retornar al menú a menos que se elija la opción “Salir”.
1. Opción 1
2. Opción 2
3. Opción 3
4. Salir
Ingrese opción: #
*/

int main(int argc, char const *argv[])
{
    int opcion;
    printf("Opcion 1 \n");
    printf("Opcion 2 \n");
    printf("Opcion 3 \n");
    printf("Opcion 4 (salir) \n");

    scanf("%d", &opcion);

    switch (opcion)
    {
    case 1:
        printf("Eligio opcion 1");
        break;

    case 2:
        printf("Eligio opcion 2");
        break;
    case 3:
        printf("Eligio opcion 3");
        break;
    case 4:
        printf("Eligio opcion 4");
        break;
    }

    return 0;
}
