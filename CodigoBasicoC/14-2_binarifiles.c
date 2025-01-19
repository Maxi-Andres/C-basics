#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_ELEMENTOS 5

typedef struct {
    int id;
    char nombre[50];
    float calificacion;
} Estudiante;

void escribirArchivoBinario(const char *nombreArchivo) {
    FILE *archivo = fopen(nombreArchivo, "wb");
    if (archivo == NULL) {
        printf("Error: No se pudo abrir el archivo para escritura.\n");
        exit(1);
    }

    Estudiante estudiantes[NUM_ELEMENTOS] = {
        {1, "Alice", 8.5},
        {2, "Bob", 7.0},
        {3, "Charlie", 9.3},
        {4, "Diana", 6.8},
        {5, "Eve", 7.9}
    };

    int elementos_escritos = fwrite(estudiantes, sizeof(Estudiante), NUM_ELEMENTOS, archivo);
    if (elementos_escritos != NUM_ELEMENTOS) {
        printf("Error: No se escribieron todos los elementos en el archivo.\n");
        fclose(archivo);
        exit(1);
    }

    printf("Archivo binario escrito correctamente.\n");
    fclose(archivo);
}

void leerArchivoBinario(const char *nombreArchivo) {
    FILE *archivo = fopen(nombreArchivo, "rb");
    if (archivo == NULL) {
        printf("Error: No se pudo abrir el archivo para lectura.\n");
        exit(1);
    }

    Estudiante estudiantes[NUM_ELEMENTOS];
    int elementos_leidos = fread(estudiantes, sizeof(Estudiante), NUM_ELEMENTOS, archivo);
    if (elementos_leidos != NUM_ELEMENTOS) {
        printf("Error: No se leyeron todos los elementos desde el archivo.\n");
        fclose(archivo);
        exit(1);
    }

    printf("Contenido del archivo binario:\n");
    for (int i = 0; i < elementos_leidos; i++) {
        printf("ID: %d, Nombre: %s, Calificación: %.2f\n", estudiantes[i].id, estudiantes[i].nombre, estudiantes[i].calificacion);
    }

    fclose(archivo);
}

void agregarArchivoBinario(const char *nombreArchivo) {
    FILE *archivo = fopen(nombreArchivo, "ab");
    if (archivo == NULL) {
        printf("Error: No se pudo abrir el archivo para agregar datos.\n");
        exit(1);
    }

    Estudiante nuevoEstudiante = {6, "Frank", 8.2};

    int elementos_escritos = fwrite(&nuevoEstudiante, sizeof(Estudiante), 1, archivo);
    if (elementos_escritos != 1) {
        printf("Error: No se pudo agregar el nuevo estudiante al archivo.\n");
        fclose(archivo);
        exit(1);
    }

    printf("Estudiante agregado al archivo binario correctamente.\n");
    fclose(archivo);
}

void modificarArchivoBinario(const char *nombreArchivo) {
    FILE *archivo = fopen(nombreArchivo, "rb+");
    if (archivo == NULL) {
        printf("Error: No se pudo abrir el archivo para modificación.\n");
        exit(1);
    }

    // Modificar el segundo estudiante
    Estudiante estudianteModificado = {2, "Bob", 8.5};
    fseek(archivo, sizeof(Estudiante), SEEK_SET); // Ir al segundo elemento
    int elementos_escritos = fwrite(&estudianteModificado, sizeof(Estudiante), 1, archivo);
    if (elementos_escritos != 1) {
        printf("Error: No se pudo modificar el estudiante en el archivo.\n");
        fclose(archivo);
        exit(1);
    }

    printf("Estudiante modificado en el archivo binario correctamente.\n");
    fclose(archivo);
}

void borrarArchivo(const char *nombreArchivo) {
    if (remove(nombreArchivo) == 0) {
        printf("Archivo '%s' eliminado correctamente.\n", nombreArchivo);
    } else {
        printf("Error: No se pudo eliminar el archivo '%s'.\n", nombreArchivo);
    }
}

int main() {
    const char *nombreArchivo = "estudiantes.dat";

    // Escribir datos en el archivo binario
    escribirArchivoBinario(nombreArchivo);

    // Leer y mostrar datos del archivo binario
    leerArchivoBinario(nombreArchivo);

    // Agregar un nuevo estudiante al archivo binario
    agregarArchivoBinario(nombreArchivo);

    // Leer y mostrar datos nuevamente
    leerArchivoBinario(nombreArchivo);

    // Modificar datos de un estudiante en el archivo binario
    modificarArchivoBinario(nombreArchivo);

    // Leer y mostrar datos nuevamente
    leerArchivoBinario(nombreArchivo);

    // Borrar el archivo binario
    borrarArchivo(nombreArchivo);

    return 0;
}
