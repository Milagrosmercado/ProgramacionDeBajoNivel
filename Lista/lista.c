#include <stdio.h>
#include <stdlib.h>
#include "estructura.h"

int contador = 0;

Lista *crearLista()
{
    Lista *nuevaLista = NULL; // se inicializa en null
    return nuevaLista;
}

Lista *agregarElemento(Lista *nuevaLista, int valor)
{
    Lista *nodoNuevo = malloc(sizeof(Lista));
    nodoNuevo->valor = valor;    // se le asigna el valor que va a tener ese lugar
    nodoNuevo->siguiente = NULL; // el siguiente lugar siempre va a ser null
    if (nuevaLista == NULL)      // si la lista está vacia
    {
        nuevaLista = nodoNuevo;
    }
    else // si ya hay un elemento en la lista
    {
        Lista *cursor = nuevaLista;
        while (cursor->siguiente != NULL)
        {
            cursor = cursor->siguiente;
        }
        cursor->siguiente = nodoNuevo;
    }
    contador++; // contador para saber el largo de la lista
    return nuevaLista;
}
void obtenerLargoDeLaLista(Lista *nuevaLista)
{
    printf("El largo de la lista es: %d \n", contador);
}

void imprimirLista(Lista *nuevaLista)
{
    Lista *actual = nuevaLista; // puntero que va a ir recorriendo la lista
    int numeroDeLugar = 0;  // para que en la lista indique el lugar en el que está
    printf("Lista: \n");
    for (actual = nuevaLista; actual != NULL; actual = actual->siguiente)  // recorre toda la lista
    {
        numeroDeLugar++;
        printf("%d: %d \n", numeroDeLugar, actual->valor);
    }
}

int obtenerElemento(Lista *nuevaLista, int posicion)   // a partir de la posición se encuentra el elemento
{
    Lista *actual = nuevaLista;
    int nav = 1;
    int seEncontro;  // es como un booleano, cuando es 0 da falso y cuando es 1 da verdadero
    for (actual = nuevaLista; actual != NULL; actual = actual->siguiente)
    {
        if (posicion == nav)  // sise encuentra
        {
            printf("El elemento de la posicion %d es %d \n", posicion, actual->valor);  //imprime el elemento que se encontró
            seEncontro = 1;  // el booleano da verdadero
        }
        nav++;  // si no se encuentra se sigue buscando
    }
    if (seEncontro != 1)  // si no se encuentra el booleano es falso
    {
        printf("NO SE ENCONTRO \n");
    }
    return nav;
}

void eliminarElemento(Lista *nuevaLista, int posicion)  // el valor del elemento pasa a ser null
{
    Lista *actual = nuevaLista;
    int nav = 1;
    int seEncontro;
    for (actual = nuevaLista; actual != NULL; actual = actual->siguiente)
    {
        if (posicion == nav)  // se encontró el elemento que se quiere eliminar
        {
            printf("SE ELIMINO EL ELEMENTO %d QUE TENIA EL VALOR: %d \n", posicion, actual->valor);
            actual->valor = NULL;
        }
        nav++;
    }

}

int main(int argc, char const *argv[])   //pruebas
{
    Lista *lista = crearLista();

    lista = agregarElemento(lista, 10);
    lista = agregarElemento(lista, 20);
    lista = agregarElemento(lista, 30);
    lista = agregarElemento(lista, 40);
    lista = agregarElemento(lista,50);
    lista = agregarElemento(lista,60);

    printf("\n\nesperado:6\n");
    obtenerLargoDeLaLista(lista);

    printf("\n\nesperado:30\n");
    obtenerElemento(lista,3);

    printf("\n\nesperado:eliminar elemento 4 que tiene el valor 40\n");
    eliminarElemento(lista,4);

    printf("\n\nesperado: 10 20 30 0 50 60\n");
    imprimirLista(lista);

    return 0;
}
