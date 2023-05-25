#include <stdio.h>
#include <malloc.h>

typedef struct structLista
{
    int *dato;
    struct structLista *siguiente;
} Lista;

int contador = 0;

Lista *crearEInicializarLista() // se crea la lista
{
    Lista *nuevaLista = NULL; // el primer lugar de la lista es NULL porque no se agregó nada
    return nuevaLista;        
   
}

Lista *agregarUnElemento(Lista *nuevaLista, int dato) {
    Lista *nodoNuevo = malloc(sizeof(Lista));
    nodoNuevo->dato = dato;
    nodoNuevo->siguiente = NULL;
    if (nuevaLista == NULL) {
        nuevaLista = nodoNuevo;
    } else {
        Lista *cursor = nuevaLista;
        while (cursor->siguiente != NULL) {
            cursor = cursor->siguiente;
        }
        cursor->siguiente = nodoNuevo;
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
    printf("Lista:");
    while(actual != NULL)
    {
        actual = actual->siguiente;
        printf("valor:%d", actual->dato);
    }
}

int main(int argc, char const *argv[])
{
    Lista *list = crearEInicializarLista();
    agregarUnElemento(list, 1);
    agregarUnElemento(list, 2);
    obtenerLargoDeLaLista();
    imprimirLista(list);
    return 0;
}