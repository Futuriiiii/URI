#include <stdio.h>

#define QUANT 10

void ImprimeArray(int ar[], int q){
    int i;

    for(i = 0; i < q; i++){
        printf("N[%d] = %d\n", i, ar[i]);
    }
}

int main(void){
    int N[QUANT];
    int i;

    scanf("%d", &N[0]);

    for(i = 1; i < QUANT; i++){
        N[i] = N[i-1] * 2;
    }

    ImprimeArray(N, QUANT);

    return 0;
}
