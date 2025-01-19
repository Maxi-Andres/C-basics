#include <stdio.h>

enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7}; // default comienza del 0 y sigue pero lo puse asi para que se entienda mas ponele...

int main(){
    // enum = a user defined type of named integer identifiers helps to make a program more readable
    // enum are NOT STRINGS, but they can be treated as int

    enum Day today;
    today = Sun;

    if(today == Sun || today == Sat) { //! en vez de poner 1 y 7 pones los dias. Es como si fueran enteros, numeros, en vez de ser "Sun", es decir un string
        printf("\nIt's the weekend! Party time!");
    } else {
        printf("\nI have to work today :(");
    }

    return 0;
}
