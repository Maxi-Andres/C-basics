#include <stdio.h>

// f(x) = 2x - 3
float funcion(float c) {
    return 2 * c - 3;
}

float biseccion(float a, float b, float epsilon) {

    float c = 0;

    while(b - a >= epsilon){ // error que aceptas
        c = (a + b) / 2;
        if(funcion(c) == 0){
            return c;
        } else if (funcion(c) * funcion(a) < 0) { // cuidado con esto porque los numeros pueden ser muy grandes
            b = c;
        } else {
            a = c;
        }
    }
    return c;
}

int main() {

    float a=0, b=0, epsilon=0;

    printf("Ingrese el primer valor: ");
    scanf("%f", &a);

    printf("Ingrese el segundo valor: ");
    scanf("%f", &b);

    printf("Ingrese el epsilon: "); // error minimo, recorda que aproxima no "encuentra"
    scanf("%f", &epsilon);

    float raizAproximada = biseccion(a, b, epsilon);

    printf("%f", raizAproximada);

    getchar();
    return 0;
}

