#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void TirarNovaLinha(char *string){
    int i;
    for(i = 0; string[i] != '\0'; i++){
        if(string[i] == '\n'){
            string[i] = '\0';
        }
    }
}

int Soma(int termo1, int termo2){
    return termo1 + termo2;
}

int Subtracao(int termo1, int termo2){
    return termo1 - termo2;
}

int Multiplacao(int termo1, int termo2){
    return termo1 * termo2;
}

int Divisao(int termo1, int termo2){
    return termo1 / termo2;
}

void TiraSeteResult(char result[]){
    int troca;
    char *pos;
    troca = 1;
    while(troca){
        troca = 0;
        pos = strchr(result, '7');
            if(pos){
                *pos = '0';
                troca = 1;
            }
    }
}

int main(){
    char *pos;
    char calculo[20002], parte2S[10000], resultS[10000];
    int troca, parte1N, parte2N, resultN, resultNsem7;

    fgets(calculo, 20001, stdin);
    TirarNovaLinha(calculo);

    troca = 1;
    while(troca){
        troca = 0;
        pos = strchr(calculo, '7');
        if(pos){
            *pos = '0';
            troca = 1;
        }
    }
    parte1N = atoi(calculo);
    strcpy(parte2S, strrchr(calculo, ' ')+1);
    parte2N = atoi(parte2S);

    if(strchr(calculo, '+') != NULL){
        resultN = Soma(parte1N, parte2N);
        sprintf(resultS, "%d", resultN);
        TiraSeteResult(resultS);
        resultNsem7 = atoi(resultS);
        printf("%d\n", resultNsem7);
    }
    if(strchr(calculo, '-') != NULL){
        resultN = Subtracao(parte1N, parte2N);
        sprintf(resultS, "%d", resultN);
        TiraSeteResult(resultS);
        resultNsem7 = atoi(resultS);
        printf("%d\n", resultNsem7);
    }
    if(strchr(calculo, 'x') != NULL){
        resultN = Multiplacao(parte1N, parte2N);
        sprintf(resultS, "%d", resultN);
        TiraSeteResult(resultS);
        resultNsem7 = atoi(resultS);
        printf("%d\n", resultNsem7);
    }
    if(strchr(calculo, '/') != NULL){
        resultN = Divisao(parte1N, parte2N);
        sprintf(resultS, "%d", resultN);
        TiraSeteResult(resultS);
        resultNsem7 = atoi(resultS);
        printf("%d\n", resultNsem7);
    }
    return 0;
}
