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

void Falso(int ar[], int n){
    int i, ehFalso = 0;

    for(i = 0; i < n; i++){
        if(i == 0){
            if(ar[i] == ar[i+1]){
                ehFalso++;
            }
        }else{
            if(ar[i] == ar[i+1] && ar[i] != ar[i-1]){
                ehFalso++;
            }
        }
    }
    printf("%d\n", ehFalso);
}

int main (){
    int bilhetes, pessoas, i;

    while(1){
        scanf("%d%d", &bilhetes, &pessoas);
        if(bilhetes == 0 && pessoas == 0){
            break;
        }

        int ar[pessoas];

        for(i = 0; i < pessoas; i++){
            scanf("%d", &ar[i]);
        }

        Bolha(ar, pessoas);

        Falso(ar, pessoas);
    }

    return 0;
}
