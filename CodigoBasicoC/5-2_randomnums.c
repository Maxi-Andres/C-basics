#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int max = 6, min = 1;

    int numeroAleatorio = rand() % (max - min + 1) + min;

    // int numeroAleatorio = (rand() % 20) + 1;

    printf("%i\n", numeroAleatorio);

    return 0;
}