#include <stdio.h>

#define MAX 999

void Bolha(int ar[], int t){
    int i, aux, trocou = 1;

    while(trocou){
        trocou = 0;
        for(i = 0; i < t-1; i++){
            if (ar[i] > ar[i+1]){
                aux = ar[i];
                ar[i] = ar[i+1];
                ar[i+1] = aux;
                trocou = 1;
            }
        }
    }
    printf("Menor valor: %d\n", ar[0]);
}

void Posicao(int ar[], int aux[], int t){
    int i;

    for(i = 0; i < t; i++){
        if(ar[0] == aux[i]){
            printf("Posicao: %d\n", i);
        }
    }
}

int main(){
    int i, n, x[MAX], aux[MAX];

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &x[i]);
    }

    for(i = 0; i < n; i++){
        aux[i] = x[i];
    }

    Bolha(x, n);
    Posicao(x, aux, n);

    return 0;
}
