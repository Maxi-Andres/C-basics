#include <stdio.h>
#include <string.h>

// Programa que solicita el nombre del usuario y lo saluda
int main() {
    char name[25];

    printf("Cual es tu nombre: ");

    // fgets lee una línea completa de la entrada estándar (stdin) de forma segura
    fgets(name, sizeof(name), stdin);

    // Remover el salto de línea ('\n') si está presente al final de la entrada
    name[strcspn(name, "\n")] = '\0';

    printf("Hola, %s\n", name);

    // Comparar el nombre con un valor específico
    if (strcmp(name, "Juan") == 0) {
        printf("Que bueno verte, Juan!\n");
    } else {
        printf("Es un placer conocerte, %s!\n", name);
    }

    // Concatenar un mensaje
    char greeting[50] = "Hola, ";
    strcat(greeting, name);
    strcat(greeting, "!");
    printf("%s\n", greeting);

    // Longitud del nombre
    printf("La longitud del nombre es: %lu\n", strlen(name));

    return 0;
}
