
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

// estructura de la lista
struct Lista
{
    int dato;               // valor entero
    struct Node *siguiente; // puntero al siguiente nodo
};

int contador;

// se crea la lista y se agregan los nodos
struct Lista *agregarALaLista(int dato)
{

    // se agrega el nodo y se le asigna su dato
    struct Lista *node = (struct Lista *)malloc(sizeof(struct Lista));
    node->dato = dato;

    // indica que lo siguiente es nulo
    node->siguiente = NULL;
    contador++;            // para saber cuantos nodos hay
    printf("%d \n", dato); // imprime cada vez que se agrega un dato
    return node;
}

void cuantosNodosHay()
{
    printf("Hay ");
    printf("%d", contador);
    printf(" elementos en la lista");
}

int main(int argc, char const *argv[])
{
    printf("La lista es: \n");
    agregarALaLista(10);
    agregarALaLista(20);
    agregarALaLista(30);
    cuantosNodosHay();
    return 0;
}
