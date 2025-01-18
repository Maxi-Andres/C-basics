#include <stdio.h>

void sort_array(int array[], int size){ //esto es bubble sort creo

    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(array[j] < array[j+1]){ //! Depende si pones < o > lo hace asc o desc
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

}

void print_array(int array[], int size){ 

    for(int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }

}

int main(){

    int array[] = {9, 1, 8, 2, 7, 3, 6, 6, 4, 5};
    // char array[] = {"F", "A", "D", "B", "C"}; // para ordenar esto tenes que cambiar del datatype que reciben las fuciones y el print
    int size = sizeof(array) / sizeof(array[0]); 

    sort_array(array, size);
    print_array(array, size);

    return 0;
}