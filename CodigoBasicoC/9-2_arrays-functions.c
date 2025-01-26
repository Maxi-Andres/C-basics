// En C, los arreglos se pasan por referencia (como punteros), ya que el nombre del arreglo es un puntero al primer elemento.

// Pasa un puntero al arreglo. Puedes modificarlo directamente dentro de la función.
// int *arr[] o int arr[] es lo mismo

void mostrarArreglo(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

//Pasar arreglos constantes: Usa const si solo necesitas leer el arreglo no hace falta necesaria mente pero asi te das cuanta que no lo podes modificar
void imprimirArreglo(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);  // Solo lectura
    }
}

#include <stdio.h>

// Función que recibe un arreglo y su tamaño
void modificarArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;  // Duplicar cada elemento
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Antes de modificarArray: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    modificarArray(arr, size);

    printf("Después de modificarArray: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
