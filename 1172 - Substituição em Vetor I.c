#include <stdio.h>

#define QUANT 10

void ImprimeArray(int ar[], int q){
    int i;

    for(i = 0; i < q; i++){
        printf("X[%d] = %d\n", i, ar[i]);
    }
}

int main(void){
    int X[QUANT];
    int i;

    for(i = 0; i < QUANT; i++){
        scanf("%d", &X[i]);
    }

    for(i = 0; i < QUANT; i++){
        if(X[i] <= 0){
            X[i] = 1;
        }
    }

    ImprimeArray(X, QUANT);

    return 0;
}
