
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

//estructura de la lista
struct Lista
{
    int dato;
    struct Node *next; // puntero al siguiente nodo
};

int contador;

// se crea la lista y se agregan los nodos
struct Lista *agregarALaLista(int dato)
{
   
    // se agrega el nodo y se le asigna su dato
    struct Lista *node = (struct Lista *)malloc(sizeof(struct Lista));
    node->dato = dato;

    // indica que lo siguiente es nulo
    node->next = NULL;
    contador++;
    printf("%d \n",dato);
    return node;
}

void cuantosNodosHay() 
{
    printf("Hay ");
    printf("%d", contador);
    printf(" elementos en la lista");

}

void verElemento(int elemento){
    printf("%d",agregarALaLista(elemento));
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
