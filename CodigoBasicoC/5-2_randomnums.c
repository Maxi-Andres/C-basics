#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int max = 6, min = 1;

    int numeroAleatorio = rand() % (max - min + 1) + min; // asi se suele ver una generacion de numero random entre dos rangos arbitrarios

    // int numeroAleatorio = (rand() % 20) + 1; // esto da un numero del 1 - 20

    printf("%i\n", numeroAleatorio);

    return 0;
}