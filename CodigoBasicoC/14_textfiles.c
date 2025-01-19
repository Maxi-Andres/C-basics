#include <stdio.h>

int main(){

    FILE *pF = fopen("test.txt","r");

    fprintf(pF, "Hello");

    fclose(pF);

    return 0;
}


//! 3:36:00 falta  los prints que no estan en el tuto
//arch texto y arch binarios