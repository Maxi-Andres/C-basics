#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// === ENUM ===
enum Estado { OK, ERROR, INDETERMINADO };

// === STRUCT ===
struct Persona {
    char nombre[20];
    int edad;
};

// Paso por valor (NO cambia el original)
void modificarStructPorValor(struct Persona p) {
    p.edad = 99;
    strcpy(p.nombre, "Carlos");
}

// Paso por referencia (SÍ cambia el original)
void modificarStructPorReferencia(struct Persona *p) {
    p->edad = 30;
    strcpy(p->nombre, "Lucía");
}

// Imprimir struct
void imprimirPersona(struct Persona p) {
    printf("Nombre: %s, Edad: %d\n", p.nombre, p.edad);
}

// === DOUBLE POINTER ===
// Crea un array dinámico de int* (simula array 2D dinámico)
int** crearMatrizDinamica(int filas, int columnas) {
    int** matriz = malloc(filas * sizeof(int*));
    for (int i = 0; i < filas; i++) {
        matriz[i] = malloc(columnas * sizeof(int));
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = i + j;
        }
    }
    return matriz;
}

void imprimirMatriz(int** matriz, int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++)
            printf("%d ", matriz[i][j]);
        printf("\n");
    }
}

void liberarMatriz(int** matriz, int filas) {
    for (int i = 0; i < filas; i++) {
        free(matriz[i]);
    }
    free(matriz);
}

int main() {
    // === ENUM ===
    enum Estado estado = OK;
    printf("Estado actual (OK=0): %d\n\n", estado);

    // === STRUCT ===
    struct Persona persona1 = {"Juan", 25};
    printf("Struct original:\n");
    imprimirPersona(persona1);

    modificarStructPorValor(persona1);
    printf("Después de modificar por valor:\n");
    imprimirPersona(persona1); // No cambia

    modificarStructPorReferencia(&persona1);
    printf("Después de modificar por referencia:\n");
    imprimirPersona(persona1); // Sí cambia

    printf("\n");

    // === PUNTERO DOBLE ===
    int filas = 2, columnas = 3;
    int** matrizDinamica = crearMatrizDinamica(filas, columnas);
    
    printf("Matriz dinámica creada con double pointer:\n");
    imprimirMatriz(matrizDinamica, filas, columnas);

    liberarMatriz(matrizDinamica, filas); // Liberar memoria

    return 0;
}