#include <stdio.h>

int main() {

    float prices[] = {5.0, 10.0, 15.0, 20.0};
    int size = sizeof(prices) / sizeof(prices[0]); 
    // Calcula el numero de elementos del array
    //En C, los arreglos no tienen un atributo para almacenar su tamaño. El programador debe calcularlo manualmente o mantener un registro del tamaño de otra manera.

    for (int i = 0; i < size; i++) {
        printf("Precio en posición %d: %.2f\n", i, prices[i]);
    }






    // Matrix ===========================================================================

    int numbers[2][3] = {{1, 2, 3},
                        {4, 5, 6}};






    return 0;
}

//! 2:22:00 falta random num y los prints que no estan en el tuto