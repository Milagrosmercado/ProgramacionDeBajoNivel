#include <stdio.h>

struct Persona
{
    char nombre[20];
    int edad;
    float numeroDePersona;
    long documento;
} persona1;

void imprimirPersona(struct Persona persona)
{
    printf("Los datos de la persona son:\n");
    printf("Nombre: %s \n", persona1.nombre);
    printf("Edad: %d\n", persona1.edad);
    printf("Numero: %f\n", persona1.numeroDePersona);
    printf("Documento: %u\n", persona1.documento);
}

void agregarPersona(struct Persona persona)
{
    printf("Ingrese los datos:\n");
    printf("Nombre:");
    scanf("%s", persona1.nombre);
    printf("Edad:");
    scanf("%d", &persona1.edad);
    printf("Numero de persona:");
    scanf("%f", &persona1.numeroDePersona);
    printf("Documento:");
    scanf("%u", &persona1.documento);
}

void cambiarDatoDePersona(struct Persona dato)
{

    int opcion;
    printf("Elija una de las siguientes opciones:\n");
    printf("Opcion1: Cambiar nombre \n");
    printf("Opcion1: Cambiar edad \n");
    printf("Opcion1: Cambiar numero de persona \n");
    printf("Opcion1: Cambiar documento \n");

    printf("¿Que opcion desea elegir?:");
    scanf("%d", &opcion);
    switch (opcion)
    {
    case 1:
        printf("Nuevo nombre:");
        scanf("%s", persona1.nombre);
        printf("Nombre cambiado");
        break;

    case 2:
        printf("Nueva edad:");
        scanf("%d", &persona1.edad);
        printf("Edad cambiada");
        break;

    case 3:
        printf("Nuevo numero de persona:");
        scanf("%f", &persona1.numeroDePersona);
        printf("Nuemero de persona cambiado");
        break;

    case 4:
        printf("Nuevo documento:");
        scanf("%u", &persona1.documento);
        printf("Documento cambiado");
        break;

    default:
        printf("Opcion no encontrada");
    }
}
int main(int argc, char const *argv[])
{
    agregarPersona(persona1);
    imprimirPersona(persona1);
    cambiarDatoDePersona(persona1);
    imprimirPersona(persona1);
    cambiarDatoDePersona(persona1);
    imprimirPersona(persona1);
    cambiarDatoDePersona(persona1);
    imprimirPersona(persona1);
    cambiarDatoDePersona(persona1);
    imprimirPersona(persona1);
    return 0;
}
