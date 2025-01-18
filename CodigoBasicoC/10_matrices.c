#include <stdio.h>

// Declaración de funciones
void cargarMatriz(int m[][2], int filas, int columnas);
void imprimirMatriz(int m[][2], int filas, int columnas);

int main() {
    // Declaración e inicialización de la matriz
    int matriz[2][2] = {{52, 79}, {38, 4}};

    // Mostrando cómo funciona la aritmética de punteros con matrices
    printf("Acceso a elementos con punteros:\n");
    printf("Dirección de matriz[0][0]: %p\n", &matriz[0][0]);
    printf("Dirección de matriz[1][0]: %p\n", &matriz[1][0]);
    printf("Dirección calculada (matriz + 1): %p\n", (matriz + 1));
    printf("Valor en matriz[0][1]: %d (usando *(*(matriz + 0) + 1))\n", *(*(matriz + 0) + 1));
    printf("Valor en matriz[1][0]: %d (usando *(*(matriz + 1) + 0))\n", *(*(matriz + 1) + 0));

    // Pasando la matriz a funciones
    printf("\nCargando nueva matriz:\n");
    cargarMatriz(matriz, 2, 2);
    printf("\nImprimiendo matriz actualizada:\n");
    imprimirMatriz(matriz, 2, 2);

    return 0;
}

// Función para cargar valores en la matriz
void cargarMatriz(int m[][2], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Ingrese el valor para la posición [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]); // Acceso directo
        }
    }
}

// Función para imprimir los valores de la matriz
void imprimirMatriz(int m[][2], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Elemento en [%d][%d]: %d\n", i, j, m[i][j]); // Usando indices
        }
    }
}
