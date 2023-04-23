#include <stdio.h>

//Programar una rutina que reciba nombre y edad de una persona y las imprima por pantalla.


int main(int argc, char const *argv[])
{
    char nombre[10];
    int edad;
    printf("Nombre:");
    scanf_s("%s",nombre);  //con scanf no se puede, solo con scanf_s
    printf("Edad:");
    scanf_s("%d", &edad);
    printf("Su nombre es: %s \n", nombre);
    printf("Su edad es: %d \n", edad);
    return 0;

}

