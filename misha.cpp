#include<stdio.h>
#include<stdlib.h>
int main(){
    printf("Vvedite razmer matricy:\n");
    unsigned size;
    scanf("%d", &size);
    int* matr;
    matr = (int*)calloc(size * size, sizeof(int));
    printf("Vvedite matricu:\n");
    unsigned i = 0, j = 0;
    for(i = 0; i < size * size; ++i)
        scanf("%d", &matr[i]);
    for(i = 0; i < size - 1; ++i)
        for (j = i + 1; j < size; ++j){
        unsigned temp;
        temp = matr[size*j+i];
        matr[size*j+i] = matr[size*i+j];
        matr[size*i+j] = temp;
    }
   for (i = 0; i < size*size; ++i)
      printf("%d ", matr[i]); 
    return 0;
}

