#include <stdio.h>

int main()
{
    int num;

    printf("Ingrese un numero: ");
    fflush(stdin);
    scanf("%d", &num);

    num = num * 2;

    printf("El numero es: %d", num);

    return 0;
}