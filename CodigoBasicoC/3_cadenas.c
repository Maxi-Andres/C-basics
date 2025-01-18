#include <stdio.h>
#include <string.h>

// Programa que solicita el nombre del usuario y lo saluda
int main() {
    char name[25];

    printf("Cual es tu nombre: ");

    // fgets lee una línea completa de la entrada estándar (stdin) de forma segura
    fgets(name, sizeof(name), stdin);

    // Remover el salto de línea ('\n') si está presente al final de la entrada
    name[strcspn(name, "\n")] = '\0';

    printf("Hola, %s\n", name);

    // Comparar el nombre con un valor específico
    if (strcmp(name, "Juan") == 0) {
        printf("Que bueno verte, Juan!\n");
    } else {
        printf("Es un placer conocerte, %s!\n", name);
    }

    // Concatenar un mensaje
    char greeting[50] = "Hola, ";
    strcat(greeting, name);
    strcat(greeting, "!");
    printf("%s\n", greeting);

    // Longitud del nombre
    printf("La longitud del nombre es: %lu\n", strlen(name));


    char string1[] = "Max";
    char string2[] = "Pro";

    strlwr(string1);                            // converts a string to lowercase
    //strupr(string1);                          // converts a string to uppercase
    //strcat(string1, string2);                 // appends string2 to end of string1
    //strncat(string1, string2, 1);             // appends n characters from string2 to string1
    //strcpy(string1, string2);                 // copy string2 to string1
    //strncpy(string1, string2, 2);             // copy n characters of string2 to string1

    //strset(string1, '?');             //sets all characters of a string to a given character
    //strnset(string1, 'x', 1);         //sets first n characters of a string to a given character
    //strrev(string1);                  //reverses a string

    //int result = strlen(string1);                 // returns string length as int, sin contar el \0 como lo haria sizeof()
    int result = strcmp(string1, string2);        // string compare all characters
    //int result = strncmp(string1, string2, 1);    // string compare n characters
    //int result = strcmpi(string1, string1);       // string compare all (ignore case)
    //int result = strnicmp(string1, string1, 1);   // string compare n characters (ignore case)

    printf("%s \n", string1);

    if (result == 0) {
        printf("string1 y string2 son iguales.\n");
    } else if (result < 0) {
        printf("string1 es menor que string2.\n");
    } else {
        printf("string1 es mayor que string2.\n");
    }

    char cars[][10] = {"Mustang", "Corvette", "Camaro"}; // esto es una array de strings
    //cars[0] = "Tesla"; Esto no funciona lo que tendrias que hacer es
    strcpy(cars[0], "Tesla");

    for(int i = 0; i < sizeof(cars) / sizeof(cars[0]); i++){
        printf("%s \n", cars[i]);
    }


    return 0;
}
