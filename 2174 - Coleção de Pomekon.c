#include <stdio.h>
#include <string.h>

int main(void){
    int quant, i, j, cont = 1, trocou;
    char pokemon[1001][1001], aux[1001];

    scanf("%d%*c", &quant);

    for(i = 0; i < quant; i++){
        scanf("%[^\n]%*c", &pokemon[i]);
    }
    trocou = 1;
    while(trocou){
        trocou = 0;
        for(i = 0; i < quant-1; i++){
            if(strcmp(pokemon[i], pokemon[i+1]) > 0){
                strcpy(aux, pokemon[i]);
                strcpy(pokemon[i], pokemon[i+1]);
                strcpy(pokemon[i+1], aux);
                trocou = 1;
            }
        }
    }
    for(i = 0; i < quant-1; i++){
        if(strcmp(pokemon[i], pokemon[i+1]) != 0){
            cont++;
        }
    }
    printf("Falta(m) %d pomekon(s).\n", 151-cont);

    return 0;
}
