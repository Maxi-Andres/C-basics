#include <stdio.h>

// Declaración de funciones, las que devuelven enteros son int las que no devuelven nada son void y asi...

int sumar(int a, int b);                      // Función que retorna un valor
void imprimirMensaje(const char *mensaje);   // Función void que no retorna nada
void intercambiar(int *x, int *y);           // Función con paso de parámetros por referencia
int factorial(int n);                        // Función recursiva

// Función principal
int main() {
    // Variables para ejemplo
    int num1 = 5, num2 = 10;
    
    // Llamada a una función que retorna un valor
    int suma = sumar(num1, num2);
    printf("La suma de %d y %d es: %d\n", num1, num2, suma);

    // Llamada a una función void
    imprimirMensaje("¡Hola desde una función void!");

    // Paso de parámetros por referencia
    printf("Antes de intercambiar: num1 = %d, num2 = %d\n", num1, num2);
    intercambiar(&num1, &num2);
    printf("Después de intercambiar: num1 = %d, num2 = %d\n", num1, num2);

    // Uso de una función recursiva
    int numero = 5;
    printf("El factorial de %d es: %d\n", numero, factorial(numero));

    return 0;
}

// Definición de funciones

// Función que retorna la suma de dos números
int sumar(int a, int b) {
    return a + b;
}

// Función void para imprimir un mensaje
void imprimirMensaje(const char *mensaje) {
    printf("%s\n", mensaje);
}

// Función para intercambiar dos números usando paso por referencia
void intercambiar(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Función recursiva para calcular el factorial de un número
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Caso base
    }
    return n * factorial(n - 1); // Llamada recursiva
}

//! 1:32:00 falta random num y los prints que no estan en el tuto