#include <stdio.h>

// Imprimir todos los caracteres ASCII.

int main() {
 for (int i = 0; i < 128; i++) {
 printf("%03d---%c \n", i, i);
 }
 return 0;
}

//investigar que es ASCII