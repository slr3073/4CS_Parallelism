#include<stdio.h>
#include <stdlib.h>

#define NB_ROW 3
#define NB_COL 3
void main(int argc, char const *argv[]){
    int** array = malloc(sizeof(void *) * NB_ROW);
    for(int i = 0; i < NB_ROW; i++)
        array[i] = malloc(sizeof(int)* NB_COL);
    
    for (int i = 0; i < NB_ROW; i++)
        for (int j = 0; j < NB_COL; j++)
            array[i][j] = i + j;
        
    for (int i = 0; i < NB_ROW; i++)
        for (int j = 0; j < NB_COL; j++)
            printf("Array[%d][%d] = %d \n",i,j,array[i][j]);
}