#include <stdio.h>
#include <stdlib.h> // Para memoria dinámica

// Función ejemplo para punteros a funciones
int sumar(int a, int b) {
    return a + b;
}

// Estructura para ejemplo de punteros a estructuras
struct Persona {
    char nombre[50];
    int edad;
};

int main() {
    // Declaración y uso básico de punteros
    int numero = 42;
    int *puntero = &numero; // El puntero apunta a la dirección de 'numero'

    printf("Valor de numero: %d\n", numero);
    printf("Dirección de numero: %p\n", (void*)&numero);
    printf("Valor almacenado en puntero: %p\n", (void*)puntero); // supuestamente lo tenes que convertir en (void*) para evitar errores pero yo no note nada si no lo uso...
    printf("Valor al que apunta el puntero: %d\n", *puntero);

    // printf("Valor de numero: %d\n", numero);
    // printf("Dirección de numero: %p\n", &numero);
    // printf("Contenido del puntero: %d\n", *puntero);
    // printf("Dirección almacenada en puntero: %p\n", puntero);

    // Modificación del valor usando el puntero
    *puntero = 100;
    printf("Nuevo valor de numero: %d\n", numero);

    // Arrays y punteros
    int array[5] = {10, 20, 30, 40, 50};
    int *pArray = array; // Un array es un puntero al primer elemento
    printf("Primer elemento del array: %d\n", *pArray);
    printf("Segundo elemento del array: %d\n", *(pArray + 1));

    // Punteros y memoria dinámica
    int *memoriaDinamica = (int *)malloc(3 * sizeof(int)); // Reserva memoria para 3 enteros
    if (memoriaDinamica == NULL) {
        printf("Error al reservar memoria.\n");
        return 1;
    }

    memoriaDinamica[0] = 1;
    memoriaDinamica[1] = 2;
    memoriaDinamica[2] = 3;

    printf("Valores en memoria dinámica: %d, %d, %d\n",
            memoriaDinamica[0], memoriaDinamica[1], memoriaDinamica[2]);

    free(memoriaDinamica); // Liberar la memoria dinámica

    // Punteros a funciones
    int (*funcionSuma)(int, int) = &sumar;
    printf("La suma de 5 y 7 es: %d\n", funcionSuma(5, 7));

    // Punteros a estructuras
    struct Persona persona = {"Juan", 30};
    struct Persona *pPersona = &persona;
    printf("Nombre: %s, Edad: %d\n", pPersona->nombre, pPersona->edad);

    // Punteros nulos
    int *punteroNulo = NULL;
    if (punteroNulo == NULL) {
        printf("El puntero está nulo.\n");
    }

    // Punteros dobles
    int valor = 10;
    int *ptr1 = &valor;
    int **ptr2 = &ptr1;

    printf("Valor de ptr1 (dirección de valor): %p\n", (void*)ptr1);
    printf("Valor de ptr2 (dirección de ptr1): %p\n", (void*)ptr2);
    printf("Valor al que apunta ptr2: %p\n", (void*)*ptr2);
    printf("Valor final (contenido de valor): %d\n", **ptr2);

    return 0;
}
