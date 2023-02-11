#include <stdio.h>

void Bolha(int ar[], int n){
    int i, aux, trocou = 1;

    while(trocou){
        trocou = 0;
        for(i = 0; i < n-1; i++){
            if (ar[i] > ar[i+1]){
                aux = ar[i];
                ar[i] = ar[i+1];
                ar[i+1] = aux;
                trocou = 1;
            }
        }
    }
}

void Frequencia(int ar[], int n){
    int i, contador = 1;

    for(i = 0; i < n; i++){
        if(i == n-1){
            printf("%d aparece %d vez(es)\n", ar[i], contador);
            break;
        }
        if(ar[i] == ar[i+1]){
            contador++;
        }
        if(ar[i] != ar[i+1]){
            printf("%d aparece %d vez(es)\n", ar[i], contador);
            contador = 1;
        }
    }
}

int main(){
    int quant, i;

    scanf("%d", &quant);

    int ar[quant];

    for(i = 0; i < quant; i++){
        scanf("%d", &ar[i]);
    }

    Bolha(ar, quant);
    Frequencia(ar, quant);

    return 0;
}
