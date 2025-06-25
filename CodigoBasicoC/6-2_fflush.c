/*
fflush(stdin) no está permitido por el estándar de C!
Según el estándar de C (ISO C):
    - fflush() solo está definido para flujos de salida (como stdout).
    - Usar fflush(stdin) tiene comportamiento indefinido.

Entonces... ¿por qué a veces funciona?
Algunos compiladores (como MSVC en Windows) permiten fflush(stdin) como una extensión.
Pero en Linux (gcc) o compiladores que siguen el estándar, puede:
    - Ignorarse,
    - O producir un error o comportamiento impredecible.


*/

#include <stdio.h>

int main() {
    int edad;

    printf("Ingresa tu edad: ");
    scanf("%d", &edad);
    // Cuando usas scanf para leer un entero, por ejemplo "20\n",
    // scanf lee el número 20, pero el '\n' (enter) queda en el buffer stdin.
    // Esto puede afectar a la próxima función de lectura que uses, como fgets.

    getchar(); // Esta línea normalmente se usa para "comer" ese '\n' pendiente
    // Si la comentaste y funcionó, puede ser porque el buffer estaba vacío,
    // o porque fgets estaba leyendo directamente después del scanf y el '\n' no interfería.
    // Pero esto no siempre es confiable y puede variar según plataforma o compilador.

    // fflush(stdin); 
    // Aunque mucha gente usa fflush(stdin) para limpiar el buffer,
    // NO es estándar y tiene comportamiento indefinido.
    // En Windows con MSVC puede funcionar, pero en otros sistemas no.
    // Por eso, no se recomienda usar fflush(stdin).

    char nombre[20];
    printf("Ingresa tu nombre: ");
    // fgets lee hasta 19 caracteres o hasta que encuentre un '\n' en el buffer.
    // Si el '\n' del scanf anterior queda en el buffer, fgets lee esa nueva línea vacía
    // y tu variable "nombre" termina siendo una cadena vacía (solo '\n').
    fgets(nombre, sizeof(nombre), stdin);

    printf("Hola, %s", nombre);

    return 0;
}

// En resumen:
// Nunca uses fflush(stdin) para limpiar el buffer.
// Después de un scanf(), limpia el buffer con un loop que consuma hasta el salto de línea.
// Usa fgets() para leer cadenas que pueden tener espacios.
// Cuidado con mezclar scanf y fgets sin limpiar el buffer.
