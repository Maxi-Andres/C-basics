#include <stdio.h>
#include <math.h>
#include <limits.h>

// Programa para realizar todas las operaciones aritméticas posibles en C
int main() {
    // Declaración de variables
    int num1, num2;
    int suma, resta, multiplicacion, modulo, desplazamiento_izq, desplazamiento_der;
    float division;
    int bit_and, bit_or, bit_xor;
    
    // Solicitar entrada del usuario
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);

    // Operaciones básicas
    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;
    if (num2 != 0) {
        division = (float)num1 / num2; // convierte num1 en float para que la division de bien porque es una division de enteros
        modulo = num1 % num2; // esto da el resto
    } else {
        printf("Error: No se puede dividir entre cero ni calcular módulo.\n");
        division = 0;
        modulo = 0;
    }

    // Operaciones bit a bit
    bit_and = num1 & num2;
    bit_or = num1 | num2;
    bit_xor = num1 ^ num2;

    // Operaciones de desplazamiento
    desplazamiento_izq = num1 << 1; // Desplazamiento los bits a la izquierda
    desplazamiento_der = num1 >> 1; // Desplazamiento los bits a la derecha

    // Mostrar resultados
    printf("Resultados de las operaciones:\n");
    printf("Suma: %d + %d = %d\n", num1, num2, suma);
    printf("Resta: %d - %d = %d\n", num1, num2, resta);
    printf("Multiplicación: %d * %d = %d\n", num1, num2, multiplicacion);
    if (num2 != 0) {
        printf("División: %d / %d = %.2f\n", num1, num2, division);
        printf("Módulo: %d %% %d = %d\n", num1, num2, modulo);
    }
    printf("AND bit a bit: %d & %d = %d\n", num1, num2, bit_and);
    printf("OR bit a bit: %d | %d = %d\n", num1, num2, bit_or);
    printf("XOR bit a bit: %d ^ %d = %d\n", num1, num2, bit_xor);
    printf("Desplazamiento a la izquierda: %d << 1 = %d\n", num1, desplazamiento_izq);
    printf("Desplazamiento a la derecha: %d >> 1 = %d\n", num1, desplazamiento_der);

    return 0;
}
