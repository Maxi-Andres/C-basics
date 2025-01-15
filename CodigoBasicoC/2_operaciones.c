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

    // Variables para funciones matemáticas avanzadas
    double raiz_cuadrada, potencia, redondeo, techo, piso, absoluto, logaritmo, seno, coseno, tangente;

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
        division = (float)num1 / num2; // Convierte num1 en float para que la división sea correcta
        modulo = num1 % num2;         // Esto da el resto
    } else {
        printf("Error: No se puede dividir entre cero ni calcular módulo.\n");
        division = 0;
        modulo = 0;
    }

    // Operaciones bit a bit (bitwise)
    bit_and = num1 & num2;
    bit_or = num1 | num2;
    bit_xor = num1 ^ num2;

    // Operaciones de desplazamiento
    desplazamiento_izq = num1 << 1; // Desplazamiento de los bits a la izquierda
    desplazamiento_der = num1 >> 1; // Desplazamiento de los bits a la derecha

    // Funciones matemáticas avanzadas
    raiz_cuadrada = sqrt(num1);
    potencia = pow(num1, num2);
    redondeo = round((float)num1 / num2);
    techo = ceil((float)num1 / num2);
    piso = floor((float)num1 / num2);
    absoluto = fabs((float)num1);
    if (num1 > 0) {
        logaritmo = log((double)num1);
    } else {
        printf("Error: No se puede calcular el logaritmo de un número no positivo.\n");
        logaritmo = 0;
    }
    seno = sin(num1);
    coseno = cos(num1);
    tangente = tan(num1);

    // Mostrar resultados
    printf("\nResultados de las operaciones:\n");
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

    printf("\nResultados de funciones matemáticas avanzadas:\n");
    printf("Raíz cuadrada de %d = %.2f\n", num1, raiz_cuadrada);
    printf("Potencia: %d ^ %d = %.2f\n", num1, num2, potencia);
    printf("Redondeo de %d / %d = %.2f\n", num1, num2, redondeo);
    printf("Techo de %d / %d = %.2f\n", num1, num2, techo);
    printf("Piso de %d / %d = %.2f\n", num1, num2, piso);
    printf("Valor absoluto de %d = %.2f\n", num1, absoluto);
    if (num1 > 0) {
        printf("Logaritmo natural de %d = %.2f\n", num1, logaritmo);
    }
    printf("Seno de %d = %.2f\n", num1, seno);
    printf("Coseno de %d = %.2f\n", num1, coseno);
    printf("Tangente de %d = %.2f\n", num1, tangente);

    return 0;
}
