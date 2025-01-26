#include <stdio.h>
#include <stdlib.h>

int main() {

    // ------------------ Importante sobre arrays y matrices ------------------
    // !1. Arrays no tienen tamaño dinámico: Usa malloc/calloc si necesitas redimensionar.
    // 2. Los índices en C empiezan en 0.
    // 3. Acceso fuera del rango definido provoca comportamiento indefinido (undefined behavior).
    // 4. Las matrices son almacenadas en memoria de forma continua (row-major order).
    // 5. Los nombres de arrays son punteros al primer elemento del array.


    // ------------------ Arrays de una dimensión ------------------
    float prices[] = {5.0, 10.0, 15.0, 20.0}; // Declaración e inicialización
    int size = sizeof(prices) / sizeof(prices[0]); 
    // Calcula el número de elementos del array:
    // sizeof(prices): Tamaño total del array en bytes
    // sizeof(prices[0]): Tamaño de un solo elemento en bytes

    printf("ARRAY DE UNA DIMENSIÓN\n");
    for (int i = 0; i < size; i++) {
        printf("Precio en posición %d: %.2f\n", i, prices[i]);
    }

    // Acceso y modificación de elementos en un array
    prices[2] = 12.5; // Cambia el valor en la posición 2
    printf("Nuevo precio en posición 2: %.2f\n", prices[2]);

    // !Arrays estáticos no se pueden redimensionar una vez definidos.
    // Si necesitas arrays dinámicos, usa memoria dinámica (malloc, calloc).

    // ------------------ Arrays con inicialización parcial ------------------
    int numbers1[5] = {1, 2}; // Los demás elementos se inicializan a 0
    printf("\nARRAY CON INICIALIZACIÓN PARCIAL\n");
    for (int i = 0; i < 5; i++) {
        printf("Número en posición %d: %d\n", i, numbers1[i]);
    }

    // ------------------ Punteros y arrays ------------------
    int arr[] = {10, 20, 30, 40};
    int *ptr = arr; // 'arr' es un puntero al primer elemento
    printf("\nPUNTEROS Y ARRAYS\n");
    printf("Primera posición con puntero: %d\n", *ptr);
    printf("Segunda posición con puntero: %d\n", *(ptr + 1)); // Desplazamiento

    // ------------------ Matrices (arrays multidimensionales) ------------------
    int numbers[2][3] = {{1, 2, 3},
                        {4, 5, 6}}; // Declaración e inicialización

    // Cálculo de filas y columnas
    int rows = sizeof(numbers) / sizeof(numbers[0]); // Tamaño de la matriz / Tamaño de una fila
    int columns = sizeof(numbers[0]) / sizeof(numbers[0][0]); // Tamaño de una fila / Tamaño de un elemento

    printf("\nMATRIZ DE DOS DIMENSIONES\n");
    printf("La matriz tiene %d filas y %d columnas\n", rows, columns);

    // Recorrido de la matriz
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }

    // ------------------ Acceso y modificación de elementos en una matriz ------------------
    numbers[1][2] = 10; // Cambia el valor en la posición [1][2]
    printf("\nNuevo valor en la posición [1][2]: %d\n", numbers[1][2]);

    // ------------------ Matrices con inicialización parcial ------------------
    int partialMatrix[3][3] = {{1}, {4, 5}, {7, 8, 9}}; // Faltantes se inicializan a 0
    printf("\nMATRIZ CON INICIALIZACIÓN PARCIAL\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", partialMatrix[i][j]);
        }
        printf("\n");
    }

    // ------------------ Memoria dinámica para matrices ------------------
    printf("\nMATRIZ DINÁMICA\n");
    int *dynamicMatrix = (int *)malloc(3 * 3 * sizeof(int)); // Matriz de 3x3 en memoria dinámica

    if (dynamicMatrix == NULL) {
        printf("Error al asignar memoria\n");
        return 1; // Termina el programa si falla la asignación
    }

    // Inicializar y mostrar la matriz dinámica
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            dynamicMatrix[i * 3 + j] = i + j; // Acceso simulando 2D
            printf("%d ", dynamicMatrix[i * 3 + j]);
        }
        printf("\n");
    }

    free(dynamicMatrix); // Liberar memoria asignada dinámicamente

    return 0;
}
