#include <stdio.h>

// https://en.wikipedia.org/wiki/C_data_types

// El tamaño de los tipos de datos puede variar dependiendo de la plataforma (32 bits vs 64 bits) y el compilador utilizado. Los valores de rango son aproximados y pueden variar ligeramente según el sistema operativo y la configuración del compilador.
// 1. int: Representa números enteros
    int entero = 42; //* Declaration + Initialization 
    
    // 2. long: Entero de mayor tamaño (dependiendo de la arquitectura)
    long enteroLargo = 2147483647;
    
    // 3. long long: Entero de mayor tamaño que long (al menos 8 bytes)
    long long enteroLargoLargo = 9223372036854775807;

    // 4. float: Representa números decimales de precisión simple
    float flotante = 3.14f;
    
    // 5. double: Representa números decimales de mayor precisión (generalmente 8 bytes)
    double numeroGrande = 1234567890.123456789;

    // 6. long double: Tipo de punto flotante de mayor precisión (dependiendo de la plataforma, puede ser de 12 o 16 bytes)
    long double numeroGrandeLargo = 1234567890.123456789123456789;

    // 7. char: Representa un solo carácter (generalmente 1 byte)
    char caracter = 'A';

    // 8. unsigned int: Entero sin signo
    unsigned int enteroSinSigno = 42;
    
    // 9. unsigned long: Entero largo sin signo
    unsigned long enteroLargoSinSigno = 2147483647;
    
    // 10. unsigned char: Carácter sin signo (0 a 255)
    unsigned char caracterSinSigno = 255;

    // 11. _Bool: Representa un valor lógico (true o false)
    _Bool esVerdadero = 1; // true (1)
    _Bool esFalso = 0; // false (0)

    // 12. void: No tiene valor (usado en funciones que no retornan valor)
    void* punteroNulo = NULL;

int main() {

    printf("int: %d\n", entero);
    printf("long: %ld\n", enteroLargo);
    printf("long long: %lld\n", enteroLargoLargo);
    printf("float: %.2f\n", flotante);
    printf("double: %.9f\n", numeroGrande);
    printf("long double: %.18Lf\n", numeroGrandeLargo);
    printf("char: %c\n", caracter);
    printf("unsigned int: %u\n", enteroSinSigno);
    printf("unsigned long: %lu\n", enteroLargoSinSigno);
    printf("unsigned char: %u\n", caracterSinSigno);
    printf("_Bool (true): %d\n", esVerdadero);
    printf("_Bool (false): %d\n", esFalso);
    printf("void*: %p\n", punteroNulo);

    // ========================================================================

    // Tipos compuestos (más complejos)
    // 1. Arrays: Una colección de elementos del mismo tipo.
    int arreglo[] = {1, 2, 3, 4, 5};
    printf("Primer elemento del arreglo: %d\n", arreglo[0]);

    // 2. Estructuras: Colección de diferentes tipos de datos.
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
    int x = 10; // Declaración de una variable.
    printf("Valor de x: %d\n", x);

    x = 20; // Reasignación de valor
    printf("Nuevo valor de x: %d\n", x);

    // Uso de constantes (const)
    const int y = 30;
    // y = 40; // Esto generaría un error de compilación, ya que `y` es constante.
    printf("Valor de y (constante): %d\n", y);

    // ========================================================================

    // Ámbito de variables
    if (1) {
        int z = 50; // Variable declarada en el bloque if
        printf("Valor de z dentro del bloque: %d\n", z);
    }
    // printf("Valor de z fuera del bloque: %d\n"); // Error: z no está disponible fuera del bloque.

    // Hoisting: C no tiene "hoisting" como JavaScript, pero las variables deben ser declaradas antes de su uso.
    int a = 10;
    printf("Valor de a: %d\n", a);

    return 0;
}
