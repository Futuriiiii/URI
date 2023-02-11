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

int main(){
    int botas, tamanho, i, j, contD, contE, par;
    char lado;

    while(scanf("%d", &botas) != EOF){
        contD = contE = par = 0;
        int arD[botas], arE[botas];

        for(i = 0; i < botas; i++){
            scanf("%d %c", &tamanho, &lado);
            if(lado == 'D'){
                arD[contD] = tamanho;
                contD++;
            }else{
                arE[contE] = tamanho;
                contE++;
            }
        }
        Bolha(arD, contD);
        Bolha(arE, contE);
        for(i = 0; i < contD; i++){
            for(j = 0; j < contE; j++){
                if(arD[i] == arE[j]){
                    par++;
                    arD[i] = arE[j] = -1;
                }
            }
        }
        printf("%d\n", par);
    }

    return 0;
}
