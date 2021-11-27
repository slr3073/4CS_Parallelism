#include<stdio.h>

void main(int argc, char const *argv[]){
    int *p;
    // Ne pointe sur rien
    printf("Mon pointeur : %p \n", p);

    int variable = 5;
    printf("Variable = %d \n", variable);
    printf("Adresse variable = %p \n", &variable);

    p = &variable;
    printf("Mon pointeur : %p \n", p);
    printf("Valeur de la variable pointé : %d \n", *p);

    variable = 3;
    printf("Valeur de la variable pointé : %d \n", *p);

    //int *p2;
    // *p2 = 4; On ne peut pas faire ça

    int variable2 = 2;
    printf("Variable = %d \n", variable2);
    int *p3 = &variable2;
    printf("Valeur de la variable pointé : %d \n", *p3);
}
