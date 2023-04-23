#include <stdio.h>

// Determinar si el número ingresado es par o no

int main(int argc, char const *argv[])
{
    int numero;

    printf("Ingrese un numero:");
    scanf("%d", &numero); // cuando es decimal agregar en & adelante de la aclaración de lo que se debe recibir
    
    if ( numero % 2 == 0)
    {
        printf("Su numero es par");
    } else{
        printf("Su numero es impar");
    }
    

    return 0;
}
