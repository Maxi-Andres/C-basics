#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *archivo;

    // 1. Apertura en modo escritura "w": se crea un archivo nuevo o se sobreescribe
    printf("------------ 1. ------------");
    archivo = fopen("archivo_ejemplo.txt", "w");
    if (archivo == NULL) {
        printf("Error al abrir el archivo en modo escritura.\n");
        return 1;
    }
    fprintf(archivo, "Linea 1: Hola, este es un ejemplo.\n");
    fprintf(archivo, "Linea 2: Este archivo demuestra manejo de archivos.\n");
    fclose(archivo);

    // 2. Apertura en modo lectura "r":
    printf("------------ 2. ------------");
    archivo = fopen("archivo_ejemplo.txt", "r");
    if (archivo == NULL) {
        printf("Error al abrir el archivo en modo lectura.\n");
        return 1;
    }
    printf("Contenido del archivo:\n");
    char linea[100];
    while (fgets(linea, sizeof(linea), archivo) != NULL) {
        printf("%s", linea);
    }
    fclose(archivo);

    // 3. Apertura en modo agregar "a":
    printf("------------ 3. ------------");
    archivo = fopen("archivo_ejemplo.txt", "a");
    if (archivo == NULL) {
        printf("Error al abrir el archivo en modo agregar.\n");
        return 1;
    }
    fputs("Linea 3: Este texto se agrega al final del archivo.\n", archivo);
    fclose(archivo);

    // 4. Leer carácter por carácter usando fgetc:
    printf("------------ 4. ------------");
    archivo = fopen("archivo_ejemplo.txt", "r");
    if (archivo == NULL) {
        printf("Error al abrir el archivo en modo lectura.\n");
        return 1;
    }
    printf("\nLeyendo carácter por carácter:\n");
    char caracter;
    while ((caracter = fgetc(archivo)) != EOF) {
        putchar(caracter);
    }
    fclose(archivo);

    // 5. Usar fseek, ftell, rewind para manipular el puntero del archivo:
    printf("------------ 5. ------------");
    archivo = fopen("archivo_ejemplo.txt", "r");
    if (archivo == NULL) {
        printf("Error al abrir el archivo en modo lectura.\n");
        return 1;
    }
    fseek(archivo, 10, SEEK_SET); // Mover el puntero 10 bytes desde el inicio
    printf("\nContenido desde el byte 10:\n");
    while (fgets(linea, sizeof(linea), archivo) != NULL) {
        printf("%s", linea);
    }
    rewind(archivo); // Volver al inicio del archivo
    printf("\nContenido tras rewind:\n");
    while (fgets(linea, sizeof(linea), archivo) != NULL) {
        printf("%s", linea);
    }
    fclose(archivo);

    // 6. Uso de remove y rename:
    printf("------------ 6. ------------");
    if (rename("archivo_ejemplo.txt", "archivo_renombrado.txt") == 0) {
        printf("\nEl archivo fue renombrado exitosamente.\n");
    } else {
        printf("\nError al renombrar el archivo.\n");
    }

    if (remove("archivo_renombrado.txt") == 0) {
        printf("El archivo fue eliminado exitosamente.\n");
    } else {
        printf("Error al eliminar el archivo.\n");
    }

    return 0;
}
