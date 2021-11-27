#include<stdio.h>

void main(int argc, char const *argv[]){
    int var = 5;
    printf("Ma variable = %d\n", var);
    printf("L'adresse de ma variable : %p\n", &var);

    var = 3;
    printf("Ma variable = %d\n", var);
    
    // On ne peut pas faire *var car ce n'est pas un pointer mais :
    *&var = 2;
    printf("Ma variable = %d\n", var);
}
