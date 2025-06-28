#include <stdio.h>

// Declaración de funciones, las que devuelven enteros son int las que no devuelven nada son void y asi... Se le dice prototype function

int sumar(int a, int b);                     // Función que retorna un valor, pasando parámetros por valor
void imprimirMensaje(const char *mensaje);   // Función void que no retorna nada, usada para realizar una acción Siempre se pasan por referencia implícitamente (realmente se pasa un puntero al primer elemento).
void intercambiar(int *x, int *y);           // Función con paso de parámetros por referencia, modifica valores originales
int factorial(int n);                        // Función recursiva
void imprimirArray(int arr[], int size);    // Se pasa como un puntero, típicamente: int arr[] o int*
//* En C, el tamaño del array no se puede obtener dentro de la función, por eso se pasa como parámetro aparte.

// Función principal
int main() {
    // Variables para ejemplo
    int num1 = 5, num2 = 10;
    
    // Llamada a una función que retorna un valor
    int suma = sumar(num1, num2);
    printf("La suma de %d y %d es: %d\n", num1, num2, suma);
    // `num1` y `num2` no cambian porque se pasan por valor, no por referencia.

    // Llamada a una función void
    imprimirMensaje("¡Hola desde una función void!");

    // Paso de parámetros por referencia
    printf("Antes de intercambiar: num1 = %d, num2 = %d\n", num1, num2);
    intercambiar(&num1, &num2);
    printf("Después de intercambiar: num1 = %d, num2 = %d\n", num1, num2);
    //`num1` y `num2` se modifican directamente, ya que se pasa un puntero a su memoria.

    // Uso de una función recursiva
    int numero = 5;
    printf("El factorial de %d es: %d\n", numero, factorial(numero));

    int numeros[] = {1, 2, 3, 4, 5};
    int longitud = sizeof(numeros) / sizeof(numeros[0]);

    imprimirArray(numeros, longitud);  // solo se pasa el puntero

    return 0;
}

// Definición de funciones

// Función que retorna la suma de dos números
int sumar(int a, int b) {
    a++;    // Modifica solo la copia local de `a`
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
    // Modifica directamente los valores originales usando sus direcciones de memoria.
}

// Función recursiva para calcular el factorial de un número
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Caso base
    }
    return n * factorial(n - 1); // Llamada recursiva
}

void imprimirArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}