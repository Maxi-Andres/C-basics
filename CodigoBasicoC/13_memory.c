#include <stdio.h>
#include <stdlib.h>

int main() {
    // Usando malloc para asignar memoria dinámica
    int *ptr1;
    ptr1 = (int *)malloc(5 * sizeof(int)); // Asignando memoria para un array de 5 enteros
    if (ptr1 == NULL) {
        printf("Error al asignar memoria con malloc\n");
        return 1; // Finaliza si malloc falla
    }

    printf("Memoria asignada con malloc (valores no inicializados):\n");
    for (int i = 0; i < 5; i++) {
        printf("ptr1[%d] = %d\n", i, ptr1[i]); // Valores no inicializados (basura)
    }

    // Usando calloc para asignar memoria dinámica inicializada en cero
    int *ptr2;
    ptr2 = (int *)calloc(5, sizeof(int)); // Asignando memoria para un array de 5 enteros inicializados a 0
    if (ptr2 == NULL) {
        printf("Error al asignar memoria con calloc\n");
        free(ptr1);
        return 1; // Finaliza si calloc falla
    }

    printf("\nMemoria asignada con calloc (valores inicializados en 0):\n");
    for (int i = 0; i < 5; i++) {
        printf("ptr2[%d] = %d\n", i, ptr2[i]);
    }

    // Redimensionando la memoria con realloc
    ptr2 = (int *)realloc(ptr2, 10 * sizeof(int)); // Redimensionando el bloque a 10 enteros
    if (ptr2 == NULL) {
        printf("Error al redimensionar memoria con realloc\n");
        free(ptr1);
        return 1; // Finaliza si realloc falla
    }

    printf("\nMemoria redimensionada con realloc (nuevos valores sin inicializar):\n");
    for (int i = 0; i < 10; i++) {
        printf("ptr2[%d] = %d\n", i, ptr2[i]); // Los nuevos valores pueden no estar inicializados
    }

    // Liberando memoria asignada
    free(ptr1);
    free(ptr2);

    printf("\nMemoria liberada.\n");

    return 0;
}
