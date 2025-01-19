#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_INTENTOS 3
#define RANGO_MAX 100

void comprobacion(int numeroAleatorio, int jugador) {
    if (numeroAleatorio < jugador) {
        printf("El numero es mas pequeño que el que dijiste.\n");
    } else if (numeroAleatorio > jugador) {
        printf("El numero es mas grande que el que dijiste.\n");
    } else {
        printf("¡Adivinaste! ¡Felicidades!\n");
    }
}

int main() {
    srand(time(NULL));
    int numeroAleatorio = (rand() % RANGO_MAX) + 1;
    int jugador = 0;

    printf("¡Bienvenido al juego de adivinanza!\n");
    printf("Estoy pensando en un numero entre 1 y %d. Tienes %d intentos para adivinarlo.\n", RANGO_MAX, MAX_INTENTOS);

    // Bucle de intentos
    for (int i = 1; i <= MAX_INTENTOS; i++) {
        printf("\nIntento %d: Ingresa tu numero: ", i);

        // Valida la entrada del jugador
        while (scanf("%d", &jugador) != 1 || jugador < 1 || jugador > RANGO_MAX) {
            printf("Entrada invalida. Ingresa un numero entre 1 y %d: ", RANGO_MAX);
            while (getchar() != '\n'); // Limpia el bufer de entrada
        }

        comprobacion(numeroAleatorio, jugador);

        if (numeroAleatorio == jugador) {
            return 0; // Salida del programa
        }
    }

    printf("\nLo siento, no adivinaste. El numero era %d. ¡Mas suerte la proxima vez!\n", numeroAleatorio);

    return 0;
}
