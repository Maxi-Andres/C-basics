#include <stdio.h>
#include <stdbool.h>

// https://en.wikipedia.org/wiki/C_data_types

// El tamaño de los tipos de datos puede variar dependiendo de la plataforma (32 bits vs 64 bits) y el compilador utilizado. Los valores de rango son aproximados y pueden variar ligeramente según el sistema operativo y la configuración del compilador.

// Tipos de datos básicos en C
// 1. int: Representa números enteros
int entero = 42; //* declaracion + asignacion

// 2. long: Entero de mayor tamaño (dependiendo de la arquitectura)
long enteroLargo = 2147483647;

// 3. long long: Entero de mayor tamaño que long (al menos 8 bytes)
long long enteroLargoLargo = 9223372036854775807;

// 4. float: Representa números decimales de precisión simple (generalmente 4 bytes)
float flotante = 3.14f;

// 5. double: Representa números decimales de mayor precisión (generalmente 8 bytes)
double numeroGrande = 1234567890.123456789;

// 6. long double: Tipo de punto flotante de mayor precisión (dependiendo de la plataforma, puede ser de 12 o 16 bytes)
long double numeroGrandeLargo = 1234567890.123456789123456789;

// 7. char: Representa un solo carácter (generalmente 1 byte)
char caracter = 'A';

// 8. Array de caracteres (cadena en C)
char name[] = "Maxi";

// 9. unsigned int: Entero sin signo
unsigned int enteroSinSigno = 42;

// 10. unsigned long: Entero largo sin signo
unsigned long enteroLargoSinSigno = 2147483647;

// 11. unsigned char: Carácter sin signo (0 a 255)
unsigned char caracterSinSigno = 255;

// 12. _Bool: Representa un valor lógico (true o false)
_Bool esVerdadero = 1; // true (1)
_Bool esFalso = 0;     // false (0)

bool e = true; // Usando la librería <stdbool.h>

// 13. void: No tiene valor (usado en funciones que no retornan valor)
void* punteroNulo = NULL;

int main() {
    // Impresión de los tipos de datos básicos
    printf("int: %d\n", entero);
    printf("long: %ld\n", enteroLargo);
    printf("long long: %lld\n", enteroLargoLargo);
    printf("float: %.2f\n", flotante);
    printf("double: %.9f\n", numeroGrande);
    printf("long double: %.18Lf\n", numeroGrandeLargo);
    printf("char: %c\n", caracter);
    printf("Hello: %s\n", name);
    printf("unsigned int: %u\n", enteroSinSigno);
    printf("unsigned long: %lu\n", enteroLargoSinSigno);
    printf("unsigned char: %u\n", caracterSinSigno);
    printf("_Bool (true): %d\n", esVerdadero);
    printf("_Bool (false): %d\n", esFalso);
    printf("void*: %p\n", punteroNulo);

// ========================================================================

    // Tipos compuestos
    // 1. Arrays: Una colección de elementos del mismo tipo
    int arreglo[] = {1, 2, 3, 4, 5};
    printf("Primer elemento del arreglo: %d\n", arreglo[0]);

    // 2. Estructuras: Colección de diferentes tipos de datos
    struct Persona {
        char nombre[50];
        int edad;
    };

    struct Persona persona1;
    persona1.edad = 25;
    snprintf(persona1.nombre, sizeof(persona1.nombre), "Juan");
    printf("Nombre: %s, Edad: %d\n", persona1.nombre, persona1.edad);

// ========================================================================

    // Variables y buenas prácticas en C
    int x = 10; // Declaración de una variable
    printf("Valor de x: %d\n", x);

    x = 20; // Reasignación de valor
    printf("Nuevo valor de x: %d\n", x);

    // Uso de constantes (const)
    const int y = 30;
    printf("Valor de y (constante): %d\n", y);

    // Ámbito de variables
    if (1) {
        int z = 50; // Variable declarada en el bloque if
        printf("Valor de z dentro del bloque: %d\n", z);
    }

    const float PI = 3.14159264; //* al poner const no se puede cambiar el valor de PI, se pone en mayuscula para que sea facil de darte cuenta

// ========================================================================

    // Ejemplos adicionales de tipos de datos
    char a = 'C';                   // single character    %c
    char b[] = "Bro";            // array of characters %s  

    float c = 3.141592;                          // 4 bytes (32 bits of precision) 6 - 7 digits %f
    double d = 3.141592653589793; // 8 bytes (64 bits of precision) 15 - 16 digits %lf

    bool e = true;                         // 1 byte (true or false) %d
    
    char f = 120;                          // 1 byte (-128 to +127) %d or %c
    unsigned char g = 255;       // 1 byte (0 to +255) %d or %c

    short h = 32767;                   // 2 bytes (−32,768 to +32,767) %d
    unsigned short i = 65535;  // 2 bytes (0 to +65,535) %d

    int j = 2147483647;                     // 4 bytes (-2,147,483,648 to +2,147,483,647) %d
    unsigned int k = 4294967295;  // 4 bytes (0 to +4,294,967,295) %u

    long long int l = 9223372036854775807; // 8 bytes (-9 quintillion to +9 quintillion) %lld
    unsigned long long int m = 18446744073709551615U; // 8 bytes (0 to +18 quintillion) %llu

    printf("%c\n", a);  // char
    printf("%s\n", b);  // character array
    printf("%f\n", c);  // float
    printf("%lf\n", d); // double
    printf("%d\n", e);  // bool
    printf("%d\n", f);  // char as numeric value
    printf("%d\n", g);  // unsigned char as numeric value
    printf("%d\n", h);  // short
    printf("%d\n", i);  // unsigned short
    printf("%d\n", j);  // int
    printf("%u\n", k);  // unsigned int
    printf("%lld\n", l);  // long long int
    printf("%llu\n", m);  // unsigned long long int

    return 0;
}
