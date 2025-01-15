#include <stdio.h>
#include <stdlib.h> // esto te da EXIT_SUCCESS (0) y EXIT_FAILURE (1), para que sean mas faciles de leer, esta libreria tambien da malloc, calloc, etc...

int main() {
    int numero;
    char nombre[50];

    // Entrada estándar (stdin)
    printf("Ingrese su nombre: ");
    fgets(nombre, sizeof(nombre), stdin); // Lee una línea completa del usuario, incluyendo espacios

    printf("Ingrese un número entero: ");
    if (scanf("%d", &numero) != 1) { // Verifica que la entrada sea válida
        fprintf(stderr, "Error: Entrada no válida. Debe ingresar un número entero.\n"); // Salida de error (stderr)
        return EXIT_FAILURE;
    }

    // Salida estándar (stdout)
    printf("\nHola, %s", nombre); // Imprime el nombre ingresado
    printf("El número ingresado es: %d\n", numero);
    printf("El doble de su número es: %d\n", numero * 2);

    // Salida de error estándar (stderr)
    if (numero < 0) {
        fprintf(stderr, "Advertencia: Ingresaste un número negativo.\n");
    }

    return EXIT_SUCCESS;
}
