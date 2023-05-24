#include <stdio.h>
#include <malloc.h>

typedef struct structLista
{
    int dato;
    struct structNodo *siguiente;
} Lista;

int contador = 0;

Lista *crearEInicializarLista() // se crea la lista
{
    Lista *cabeza = NULL; // el primer lugar de la lista es NULL porque no se agregó nada
    return cabeza;        // returna lo que sería el primer lugar
    printf("se creó una lista");
}

Lista *nuevoNodo(int dato) // se hace el nodo que sería el lugar que ocupa los lugares de la lista
{
    Lista *a; // puntero donde va el dato
    a = malloc(sizeof(Lista));
    a->dato = dato;      // se le asigna que el dato va a estar en ese puntero
    a->siguiente = NULL; // el valor siguiente a cada vez que se agregue un dato va a sel nulo
    return a;
}

void agregarUnElemento(Lista *cabeza, int entrada)
{
    Lista *nuevo;
    nuevo = nuevoNodo(entrada); // se utiliza (nuevoNodo) para agregar uno nuevo en el siguiente lugar
    nuevo->siguiente = NULL;    // como el lugar null de antes ahora ocupa un dato ahora el siguiente de este es null
    cabeza = nuevo;
    printf("%d \n", entrada); // imprime a medida que se agrega un dato a la lista
    contador++;               // para ver cuantos elementos hay
}

void obtenerLargoDeLaLista()
{
    printf("El largo de la lista es: %d \n", contador);
}

void imprimirLista(Lista *cabeza)
{
    Lista *actual = cabeza;
    printf("Lista:");
    while (actual != NULL)
    {
       actual = actual->siguiente;
       printf("%d", actual->dato);
    }
}

int main(int argc, char const *argv[])
{
    Lista *nuevaLista = crearEInicializarLista();
    agregarUnElemento(nuevaLista, 1);
    agregarUnElemento(nuevaLista, 2);
    obtenerLargoDeLaLista();
    imprimirLista(nuevaLista);
    return 0;
}