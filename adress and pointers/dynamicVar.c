#include<stdio.h>
#include <stdlib.h>

void main(int argc, char const *argv[]){

    // int %d, long %ld, float %f, char %c, pointer %p
    printf("char : %ld octets\n", sizeof(char));
    printf("int : %ld octets\n", sizeof(int));
    printf("long : %ld octets\n", sizeof(long));
    printf("double : %ld octets\n", sizeof(double));
    printf("pointer : %ld octets\n", sizeof(void *));

    float *p = malloc(sizeof(float));
    if (p == NULL) exit(0);
    
    printf("Valeur pointeur : %p \n", p);
    printf("Valeur pointé : %f \n", *p);
    *p = 3.0;
    printf("Valeur pointé : %f \n", *p);

    free(p);
    
}
