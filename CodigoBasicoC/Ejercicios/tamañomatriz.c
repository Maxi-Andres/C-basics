#include <stdio.h>

#define MAX_FILAS 100
#define MAX_COLUMNAS 100

int main() {
    int filas, columnas;
    int matriz[MAX_FILAS][MAX_COLUMNAS]; // Matriz de tamaño máximo

    // Solicitar dimensiones de la matriz
    printf("Ingrese el número de semanas (filas): ");
    scanf("%d", &filas);
    printf("Ingrese el número de productos (columnas): ");
    scanf("%d", &columnas);

    if (filas > MAX_FILAS || columnas > MAX_COLUMNAS) {
        printf("Error: Dimensiones exceden el tamaño máximo permitido (%dx%d).\n", MAX_FILAS, MAX_COLUMNAS);
        return 1;
    }

    // Ingreso de datos en la matriz
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Ingrese la cantidad vendida para la semana %d, producto %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Salida inicial de ejemplo
    printf("\nEjemplo de dato ingresado: Semana 1, Producto 1 -> Vendido: %d\n", matriz[0][0]);

    // Mostrar todos los datos ingresados
    printf("\n--- Datos ingresados ---\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Semana %d, Producto %d: Se vendieron %d unidades\n", i + 1, j + 1, matriz[i][j]);
        }
    }

    return 0;
}
