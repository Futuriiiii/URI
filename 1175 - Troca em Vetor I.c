#include <stdio.h>

#define QUANT 20

void ImprimeArray(int ar[], int q){
    int i;

    for(i = 0; i < q; i++){
        printf("N[%d] = %d\n", i, ar[i]);
    }
}

int main(void){
    int N[QUANT];
    int i, aux;

    for(i = 0; i < QUANT; i++){
        scanf("%d", &N[i]);
    }

    for(i = 0; i < QUANT/2; i++){
        aux = N[i];
        N[i] = N[QUANT-1-i];
        N[QUANT-1-i] = aux;
    }

    ImprimeArray(N, QUANT);

    return 0;
}

