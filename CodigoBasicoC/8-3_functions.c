#include <stdio.h>
#include <string.h>

// ======== FUNCIONES PARA DEMOSTRAR PASO POR VALOR Y REFERENCIA ========

// Pasar un int por valor (NO cambia el original)
void cambiarEnteroValor(int x) {
    x = 999;
}

// Pasar un int por referencia (SÍ cambia el original)
void cambiarEnteroReferencia(int *x) {
    *x = 999;
}

// Pasar un float por referencia
void cambiarFloat(float *f) {
    *f = 123.45f;
}

// Pasar un string (char array) por referencia implícita (los arrays ya se pasan por referencia)
void cambiarString(char str[]) {
    strcpy(str, "Modificado");
}

// Pasar un array 1D
void modificarArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] += 10;
    }
}

// Pasar un array 2D
void modificarArray2D(int arr[][3], int filas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < 3; j++) {
            arr[i][j] += 1;
        }
    }
}

// ===================== FUNCIÓN PRINCIPAL =====================
int main() {
    // === Tipos de datos básicos ===
    int entero = 10;
    float flotante = 3.14f;
    double doble = 3.14159265359;
    char texto[20] = "Hola";

    printf("=== Tipos Básicos ===\n");
    printf("Entero: %d\n", entero);
    printf("Float: %.2f\n", flotante);
    printf("Double: %.10f\n", doble);
    printf("String (char[]): %s\n\n", texto);

    // === Paso por valor ===
    int copiaEntero = entero;
    cambiarEnteroValor(copiaEntero);
    printf("Después de pasar por valor: %d (sin cambios)\n", copiaEntero);

    // === Paso por referencia ===
    cambiarEnteroReferencia(&entero);
    printf("Después de pasar por referencia: %d (cambiado)\n\n", entero);

    cambiarFloat(&flotante);
    printf("Float modificado por referencia: %.2f\n", flotante);

    cambiarString(texto);
    printf("String modificado: %s\n\n", texto);

    // === Array 1D ===
    int arreglo[] = {1, 2, 3, 4, 5};
    int tamaño = sizeof(arreglo) / sizeof(arreglo[0]);

    printf("Array original: ");
    for (int i = 0; i < tamaño; i++) printf("%d ", arreglo[i]);
    printf("\n");

    modificarArray(arreglo, tamaño);

    printf("Array modificado: ");
    for (int i = 0; i < tamaño; i++) printf("%d ", arreglo[i]);
    printf("\n\n");

    // === Array 2D ===
    int matriz[2][3] = {{1, 2, 3}, {4, 5, 6}};
    printf("Array 2D original:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++)
            printf("%d ", matriz[i][j]);
        printf("\n");
    }

    modificarArray2D(matriz, 2);

    printf("Array 2D modificado:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++)
            printf("%d ", matriz[i][j]);
        printf("\n");
    }

    return 0;
}