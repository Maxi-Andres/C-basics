#include <stdio.h>
#include <string.h>

// Definición de un struct para representar a una persona
struct Persona {
    char nombre[50];
    int edad;
    float altura;
};

//! Uso de typedef para simplificar el uso de structs
typedef struct {
    char nombre[50];
    int edad;
    float salario;
} Empleado;

// Función que toma un struct como argumento
void mostrarPersona(struct Persona p) {
    printf("Nombre: %s\n", p.nombre);
    printf("Edad: %d\n", p.edad);
    printf("Altura: %.2f m\n", p.altura);
}

// Función que modifica un struct mediante un puntero
void actualizarEdad(struct Persona *p, int nuevaEdad) {
    (*p).edad = nuevaEdad;          //! Cuando usas punteros se puede usar asi (*algo)
}

// Función que imprime un struct Empleado
void mostrarEmpleado(const Empleado *e) {
    printf("Nombre: %s, Edad: %d, Salario: %.2f\n", e->nombre, e->edad, e->salario); //!  o tambien se puede usar asi algo->
}

int main() {
    // Declarar y asignar valores a un struct
    struct Persona persona1;
    strcpy(persona1.nombre, "Alice"); //! se puede declarar asi
    persona1.edad = 25;
    persona1.altura = 1.70;

    struct Persona persona3 = {"Maxi", 20, 1.80}; //! o se puede declarar asi

    // Mostrar los datos de la persona
    printf("Datos de persona:\n");
    mostrarPersona(persona1);

    // Modificar datos usando un puntero
    actualizarEdad(&persona1, 30);
    printf("\nDespués de actualizar la edad:\n");
    mostrarPersona(persona1);

    // Uso de typedef para structs
    Empleado empleado1 = {"Bob", 40, 50000.0};
    Empleado empleado2 = {"Charlie", 35, 60000.0};

    printf("\nLista de empleados:\n");
    mostrarEmpleado(&empleado1);
    mostrarEmpleado(&empleado2);

    // Arrays dentro de structs
    struct Empresa {
        char nombre[50];
        Empleado empleados[2]; //! array de structs
    };

    struct Empresa miEmpresa = {"TechCorp", {empleado1, empleado2}};
    printf("\nEmpleados de %s:\n", miEmpresa.nombre);
    for (int i = 0; i < 2; i++) {
        mostrarEmpleado(&miEmpresa.empleados[i]);
    }

    // Anidación de structs
    struct Direccion {
        char calle[50];
        int numero;
    };

    struct PersonaConDireccion {
        struct Persona datos;
        struct Direccion direccion;
    };

    struct PersonaConDireccion persona2 = {
        .datos = {"Dana", 28, 1.65},
        .direccion = {"Av. Principal", 123}
    };

    printf("\nDatos de persona con dirección:\n");
    mostrarPersona(persona2.datos);
    printf("Dirección: %s %d\n", persona2.direccion.calle, persona2.direccion.numero);

    return 0;
}