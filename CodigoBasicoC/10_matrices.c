#include <stdio.h>

// Declaración de funciones
void cargarMatriz(int m[][2], int filas, int columnas);
void imprimirMatriz(int m[][2], int filas, int columnas);

//Diferencia clave entre m[2][2] y m[][2] 

// m[2][2]:
// El número de filas (2) y columnas (2) se conocen en tiempo de compilación.
// Se reserva memoria para una matriz fija de 2x2.

// m[][2]:
// Solo se especifica el número de columnas (2), pero no las filas.
// Esto es útil cuando las filas no son constantes o pueden variar.
// Requiere que pases el número de filas por separado a la función.

// 1. Sin usar punteros explícitos
void imprimirMatriz1(int matriz[3][3], int filas, int columnas) {
    printf("Matriz (sin punteros explícitos):\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}
// Sin punteros explícitos (int matriz[filas][columnas]):
// Fácil de leer y usar.
// El tamaño de las columnas debe conocerse en tiempo de compilación.
// La sintaxis es más sencilla, adecuada para matrices de tamaño fijo.

// 2. Usando puntero (int *matriz)
void imprimirMatriz2(int *matriz, int filas, int columnas) {
    printf("Matriz (con puntero):\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", *(matriz + i * columnas + j));  // Acceso con aritmética de punteros
        }
        printf("\n");
    }
}
//Usando puntero (int *matriz):
// Es más flexible, ya que no requiere un tamaño fijo en tiempo de compilación.
// Necesita aritmética de punteros para acceder a los elementos.
// Ideal para matrices dinámicas o de tamaño desconocido.

// 3. Usando puntero a un arreglo de columnas fijas (int (*m)[columnas])
void imprimirMatriz3(int (*m)[3], int filas) {
    printf("Matriz (con puntero a un arreglo de columnas fijas):\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", m[i][j]);  // Acceso directo
        }
        printf("\n");
    }
}
//Usando puntero a un arreglo (int (*m)[columnas]):
// Similar al primer caso, pero permite más flexibilidad con el tamaño de las filas.
// Combina la claridad de la sintaxis de arreglos con la potencia de los punteros.
// Útil cuando las columnas son de tamaño fijo pero las filas pueden variar.

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

    // Declaración de una matriz 3x3
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Llamadas a las funciones con las distintas formas de pasar matrices
    imprimirMatriz1(matriz, 3, 3);             // Sin punteros explícitos
    imprimirMatriz2((int *)matriz, 3, 3);      // Usando puntero
    imprimirMatriz3(matriz, 3);                // Usando puntero a un arreglo de columnas fijas

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


