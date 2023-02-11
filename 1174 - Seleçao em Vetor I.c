#include <stdio.h>

#define QUANT 100

void ImprimeArray(float ar[], int q){
    int i;

    for(i = 0; i < q; i++){
        if(ar[i] <= 10){
        printf("A[%d] = %.1f\n", i, ar[i]);
        }
    }
}

int main(void){
    float A[QUANT];
    int i;

    for(i = 0; i < QUANT; i++){
        scanf("%f", &A[i]);
    }

    ImprimeArray(A, QUANT);

    return 0;
}

