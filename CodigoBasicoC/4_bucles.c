#include <stdio.h>

int main(){

    int diametro = 0;
    float PI = 3.1415;

    printf("Ingrese el diametro del circulo para calcular la circunferencia: ");
    scanf("%d", &diametro);

    float circunferencia = PI * diametro;

    printf("La circunferencia es: %.2f", circunferencia);

    return 0;
}