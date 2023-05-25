#include <stdio.h>
#include <stdlib.h>
typedef struct structLista
{
    int valor;
    struct structLista *siguiente;
} Lista;

int contador = 0;

 Lista *crearLista() 
{
    Lista *nuevaLista = NULL;   // se inicializa en null
    return nuevaLista;
}

Lista *agregarElemento(Lista *nuevaLista, int valor)
{
    Lista *nodoNuevo = malloc(sizeof(Lista));
    nodoNuevo->valor = valor;   // se le asigna el valor que va a tener ese lugar
    nodoNuevo->siguiente = NULL;    // el siguiente lugar siempre va a ser null
    if (nuevaLista == NULL) //si la lista está vacia
    {
        nuevaLista = nodoNuevo;    
    }
    else   // si ya hay un elemento en la lista
    {
        Lista *cursor = nuevaLista;
        while (cursor->siguiente != NULL)
        {
            cursor = cursor->siguiente;
        }
        cursor->siguiente = nodoNuevo;
    }
    contador++;   // contador para saber el largo de la lista
    return nuevaLista;
}
void obtenerLargoDeLaLista()
{
    printf("El largo de la lista es: %d \n", contador);
}

void imprimirLista(Lista *nuevaLista)
{
    Lista *actual = nuevaLista;    //puntero que va a ir recorriendo la lista
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
