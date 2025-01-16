#include <stdio.h>

int main() {
    int numero;

    // Solicitar entrada al usuario
    printf("Ingrese un número entero: ");
    scanf("%d", &numero);

    // Ejemplo de if
    printf("\nEstructura if:\n");
    if (numero > 0) {
        printf("  El número es positivo.\n");
    }

    // Ejemplo de if-else
    printf("\nEstructura if-else:\n");
    if (numero % 2 == 0) {
        printf("  El número es par.\n");
    } else {
        printf("  El número es impar.\n");
    }

    // Ejemplo de if-else if
    printf("\nEstructura if-else if:\n");
    if (numero > 0) {
        printf("  El número es positivo.\n");
    } else if (numero < 0) {
        printf("  El número es negativo.\n");
    } else {
        printf("  El número es cero.\n");
    }

    // Ejemplo de switch
    printf("\nEstructura switch:\n");
    printf("Ingrese un número del 1 al 5: ");
    int opcion;
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            printf("  Elegiste uno.\n");
            break;
        case 2:
            printf("  Elegiste dos.\n");
            break;
        case 3:
            printf("  Elegiste tres.\n");
            break;
        case 4:
            printf("  Elegiste cuatro.\n");
            break;
        case 5:
            printf("  Elegiste cinco.\n");
            break;
        default:
            printf("  Opción no válida.\n");
    }

    // Ejemplo avanzado: uso de switch con múltiples casos y operaciones
    printf("\nEstructura switch avanzada:\n");
    char operacion;
    int a, b;
    printf("Ingrese una operación (+, -, *, /): ");
    scanf(" %c", &operacion); // Espacio antes de %c para consumir caracteres sobrantes
    printf("Ingrese dos números: "); // los números pueden estar separados por espacios, tabulaciones o incluso estar en líneas separadas
    scanf("%d %d", &a, &b);

    switch (operacion) {
        case '+':
            printf("  %d + %d = %d\n", a, b, a + b);
            break;
        case '-':
            printf("  %d - %d = %d\n", a, b, a - b);
            break;
        case '*':
            printf("  %d * %d = %d\n", a, b, a * b);
            break;
        case '/':
            if (b != 0) {
                printf("  %d / %d = %.2f\n", a, b, (float)a / b);
            } else {
                printf("  Error: División por cero.\n");
            }
            break;
        default:
            printf("  Operación no válida.\n");
    }

    //* Operador ternario

    int x = 10, y = 20;

    // Uso del operador ternario para encontrar el mayor de dos números
    int mayor = (x > y) ? x : y;

    // Imprimir el resultado
    printf("El número mayor entre %d y %d es: %d\n", x, y, mayor);

    return 0;
}
