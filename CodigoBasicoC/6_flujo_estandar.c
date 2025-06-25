#include <stdio.h>
#include <stdlib.h> // esto te da EXIT_SUCCESS (0) y EXIT_FAILURE (1), para que sean mas faciles de leer, esta libreria tambien da malloc, calloc, etc...

#include <string.h>

int ejemplo();

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

int ejemplo() {
    char nombre1[50];
    char nombre2[50];
    char nombre3[50];
    int numero;

    // Ejemplo 1: scanf con %s — NO lee espacios, solo hasta primer espacio
    printf("Ejemplo 1 - scanf(\"%%s\"): Ingrese su nombre completo: ");
    scanf("%s", nombre1);
    printf("Leido con scanf(\"%%s\"): '%s'\n\n", nombre1);
    
    // Limpiar buffer para la siguiente lectura (descartar salto de línea pendiente)
    int c; while ((c = getchar()) != '\n' && c != EOF);

    // Ejemplo 2: fgets — lee línea completa con espacios, pero guarda '\n' al final
    printf("Ejemplo 2 - fgets: Ingrese su nombre completo: ");
    fgets(nombre2, sizeof(nombre2), stdin);
    // Eliminar salto de línea '\n' al final si existe
    nombre2[strcspn(nombre2, "\n")] = '\0';
    printf("Leido con fgets: '%s'\n\n", nombre2);

    // Ejemplo 3: scanf con formato %[^\n] — lee hasta el salto de línea, incluye espacios
    printf("Ejemplo 3 - scanf(\" %%[^\n]\"): Ingrese su nombre completo: ");
    scanf(" %[^\n]", nombre3);  // espacio antes para limpiar buffer
    printf("Leido con scanf(\" %%[^\n]\"): '%s'\n\n", nombre3);

    // Ahora leemos un número para mostrar mezcla con scanf y fgets
    printf("Ingrese un número entero: ");
    if (scanf("%d", &numero) != 1) {
        fprintf(stderr, "Error: Debe ingresar un número entero válido.\n");
        return 1;
    }
    printf("Número ingresado: %d\n", numero);

}