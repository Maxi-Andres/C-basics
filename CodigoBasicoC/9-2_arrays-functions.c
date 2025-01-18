// En C, los arreglos se pasan por referencia (como punteros), ya que el nombre del arreglo es un puntero al primer elemento.

// Pasa un puntero al arreglo. Puedes modificarlo directamente dentro de la función.

void mostrarArreglo(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

//Pasar arreglos constantes: Usa const si solo necesitas leer el arreglo.

void imprimirArreglo(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);  // Solo lectura
    }
}
