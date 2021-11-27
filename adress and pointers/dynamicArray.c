#include<stdio.h>
#include <stdlib.h>

void main(int argc, char const *argv[]){
    int size = 10;
    int *array = malloc(size * sizeof(int));
    array[1] = 2;
    for(int i = 0; i< size; i++)
        array[i] = i+1;
    
    printf("Value in array : \n");
    for(int i = 0; i< size; i++)
        printf("Array[%d] = %d \n",i,array[i]);
    
    printf("Array[15] = %d  (value outside array)\n",array[15]);
    //no array out of bound
    
    printf("\nAdresses in array : \n");
    for(int i = 0; i< size; i++)
        printf("Array[%d] = %p \n",i,&array[i]);

    free(array);
    
    //it print some random values because every process can now write on those memory cases
    printf("\nRdm values : \n");
    for(int i = 0; i< size; i++)
        printf("Array[%d] = %d \n",i,array[i]);
}