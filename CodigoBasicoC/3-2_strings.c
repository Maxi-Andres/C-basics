#include <stdio.h>
#include <string.h>

// Declaración de funciones
void mostrarString(char str[]); // los strings siempre se pasan como punteros, es decir se pueden modificar
void modificarString(char str[]);
void imprimirStringConst(const char *str); // asi se evitan las modificaciones
void mostrarStrings(char *strs[], int count);

int main() {
    // String como arreglo
    char saludo[] = "Hola mundo";
    printf("Antes de modificar: %s\n", saludo);
    
    // Pasar string a función
    mostrarString(saludo);
    
    // Modificar string dentro de la función
    modificarString(saludo);
    printf("Después de modificar: %s\n", saludo);

    // Pasar string constante
    imprimirStringConst("Este es un string constante.");

    // Múltiples strings
    char *strings[] = {"Uno", "Dos", "Tres", "Cuatro"};
    int cantidad = sizeof(strings) / sizeof(strings[0]);
    mostrarStrings(strings, cantidad);

    return 0;
}

// Implementación de las funciones

void mostrarString(char str[]) {
    printf("El string es: %s\n", str);
}

void modificarString(char str[]) {
    str[0] = 'H';  // Cambia el primer carácter
    str[1] = 'O';  // Cambia el segundo carácter
}

void imprimirStringConst(const char *str) {
    printf("El string constante es: %s\n", str);
}

void mostrarStrings(char *strs[], int count) {
    for (int i = 0; i < count; i++) {
        printf("String %d: %s\n", i + 1, strs[i]);
    }
}
