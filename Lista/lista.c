#include <stdio.h>
#include <stdlib.h>
typedef struct structLista
{
    int valor;
    struct structLista *siguiente;
    int *posicionDelElemento;
} Lista;

int contador = 0;

 Lista *crearLista() 
{
    Lista *nuevaLista = NULL; 
    return nuevaLista;
}

Lista *agregarElemento(Lista *nuevaLista, int valor)
{
    Lista *nodoNuevo = malloc(sizeof(Lista));
    nodoNuevo->valor = valor;
    nodoNuevo->siguiente = NULL;
    if (nuevaLista == NULL)
    {
        nuevaLista = nodoNuevo;
        nodoNuevo->posicionDelElemento = nodoNuevo->posicionDelElemento++;
    }
    else
    {
        Lista *cursor = nuevaLista;
        while (cursor->siguiente != NULL)
        {
            cursor = cursor->siguiente;
        }
        cursor->siguiente = nodoNuevo;
        nodoNuevo->posicionDelElemento = nodoNuevo->posicionDelElemento++;
    }
    contador++;
    return nuevaLista;
}
void obtenerLargoDeLaLista()
{
    printf("El largo de la lista es: %d \n", contador);
}

void imprimirLista(Lista *nuevaLista)
{
    Lista *actual = nuevaLista;
    int numeroDeLugar = 0;
    printf("Lista: \n");
    for (actual = nuevaLista; actual != NULL; actual = actual->siguiente)
    {
        numeroDeLugar++;
        printf("%d: %d \n", numeroDeLugar, actual->valor);
    }
}

int main(int argc, char const *argv[])
{
    Lista *lista = crearLista();

    lista = agregarElemento(lista, 1);
    lista = agregarElemento(lista, 2);
    lista = agregarElemento(lista, 3);

    obtenerLargoDeLaLista();

    imprimirLista(lista);

    return 0;
}
