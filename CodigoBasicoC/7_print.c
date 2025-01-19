#include <stdio.h>
#include <stdarg.h>

void ejemplo_vprintf(const char *formato, ...) {
    // Función personalizada que utiliza vprintf
    va_list args;
    va_start(args, formato);
    vprintf(formato, args); // Imprime con formato utilizando argumentos variables
    va_end(args);
}

int main() {
    // 1. Ejemplo de printf
    int edad = 25;
    float altura = 1.75;
    printf("1. Uso de printf:\n");
    printf("Edad: %d, Altura: %.2f metros\n\n", edad, altura);

    // 2. Ejemplo de fprintf
    printf("2. Uso de fprintf:\n");
    FILE *archivo = fopen("ejemplo.txt", "w");
    if (archivo) {
        fprintf(archivo, "Este texto se guarda en un archivo.\n");
        fclose(archivo);
        printf("Texto escrito en 'ejemplo.txt'.\n");
    } else {
        fprintf(stderr, "Error: No se pudo abrir el archivo.\n");
    }
    fprintf(stderr, "Esto se imprimió en el flujo de error (stderr).\n\n");

    // 3. Ejemplo de sprintf
    printf("3. Uso de sprintf:\n");
    char buffer[100];
    sprintf(buffer, "Hola, tu edad es: %d", edad);
    printf("Buffer: %s\n\n", buffer);

    // 4. Ejemplo de snprintf
    printf("4. Uso de snprintf:\n");
    char buffer_pequeno[10];
    snprintf(buffer_pequeno, sizeof(buffer_pequeno), "Edad: %d", edad);
    printf("Buffer limitado: %s\n\n", buffer_pequeno);

    // 5. Ejemplo de puts
    printf("5. Uso de puts:\n");
    puts("Esta es una cadena con puts. Se añade un salto de línea automáticamente.\n");

    // 6. Ejemplo de putchar
    printf("6. Uso de putchar:\n");
    char letra = 'A';
    putchar(letra);
    putchar('\n'); // Imprime un salto de línea
    puts(""); // Línea vacía para separar

    // 7. Ejemplo de vprintf
    printf("7. Uso de vprintf:\n");
    ejemplo_vprintf("Este es un ejemplo avanzado con vprintf: Edad = %d, Altura = %.2f\n\n", edad, altura);

    return 0;
}


// printf: Imprime valores formateados en la consola.
// fprintf: Escribe texto formateado en un archivo y maneja errores en el flujo estándar stderr.
// sprintf: Almacena un mensaje formateado en un buffer.
// snprintf: Similar a sprintf, pero con un tamaño límite para evitar desbordamientos.
// puts: Imprime una cadena con un salto de línea al final.
// putchar: Imprime caracteres individuales.
// vprintf: Demuestra el uso de argumentos variables para imprimir datos formateados.