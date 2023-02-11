#include <stdio.h>
#include <string.h>

int main(void){
    int quant, i, trocou;
    char codigo[1001][5], aux[5];

    while(scanf("%d%*c", &quant) != EOF){
        for(i = 0; i < quant; i++){
            scanf("%[^\n]%*c", &codigo[i]);
        }
        trocou = 1;
        while(trocou){
            trocou = 0;
            for(i = 0; i < quant-1; i ++){
                if(strcmp(codigo[i], codigo[i+1]) > 0){
                    strcpy(aux, codigo[i]);
                    strcpy(codigo[i], codigo[i+1]);
                    strcpy(codigo[i+1], aux);
                    trocou = 1;
                }
            }
        }
        for(i = 0; i < quant; i++){
            printf("%s\n", codigo[i]);
        }
    }

    return 0;
}
