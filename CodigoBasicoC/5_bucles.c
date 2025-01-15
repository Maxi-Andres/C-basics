#include <stdio.h>

int main() {
    // Ejemplo de bucle for
    printf("Bucle for:\n");
    for (int i = 0; i < 5; i++) {
        printf("  Iteración %d\n", i);
    }

    // Ejemplo de bucle while
    printf("\nBucle while:\n");
    int j = 0;
    while (j < 5) {
        printf("  Iteración %d\n", j);
        j++;
    }

    // Ejemplo de bucle do-while
    printf("\nBucle do-while:\n");
    int k = 0;
    do {
        printf("  Iteración %d\n", k);
        k++;
    } while (k < 5);

    // Ejemplo de bucle for anidado
    printf("\nBucle for anidado:\n");
    for (int m = 0; m < 3; m++) {
        for (int n = 0; n < 2; n++) {
            printf("  Iteración m=%d, n=%d\n", m, n);
        }
    }

    // Ejemplo de break en un bucle
    printf("\nUso de break:\n");
    for (int x = 0; x < 10; x++) {
        if (x == 5) {
            printf("  Se rompe el bucle en x=%d\n", x);
            break;
        }
        printf("  Iteración %d\n", x);
    }

    // Ejemplo de continue en un bucle
    printf("\nUso de continue:\n");
    for (int y = 0; y < 10; y++) {
        if (y % 2 == 0) {
            continue; // Salta el resto de la iteración si y es par
        }
        printf("  Número impar: %d\n", y);
    }

    // Ejemplo de bucle infinito con break
    printf("\nBucle infinito con break:\n");
    int z = 0;
    while (1) { // Bucle infinito
        printf("  Iteración %d\n", z);
        if (z == 4) {
            printf("  Se rompe el bucle infinito.\n");
            break;
        }
        z++;
    }

    return 0;
}
