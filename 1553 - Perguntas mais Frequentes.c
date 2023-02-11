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

void Frequencia(int ar[], int n, int freq){
    int i, apareceu = 1, ehFreq = 0;

    for(i = 0; i < n; i++){
        if(ar[i] == ar[i+1]){
            apareceu++;
        }else{
            apareceu = 1;
        }
        if(apareceu == freq){
            ehFreq++;
        }
    }
    printf("%d\n", ehFreq);
}

int main (){
    int perguntas, frequente, i;

    while(1){
        scanf("%d%d", &perguntas, &frequente);
        if(perguntas == 0 && frequente == 0){
            break;
        }

        int ar[perguntas];

        for(i = 0; i < perguntas; i++){
            scanf("%d", &ar[i]);
        }

        Bolha(ar, perguntas);

        Frequencia(ar, perguntas, frequente);
    }

    return 0;
}
