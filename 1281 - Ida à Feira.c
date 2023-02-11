#include <stdio.h>
#include <string.h>

void TirarNovaLinha(char *string){
    int i;
    for(i = 0; string[i] != '\0'; i++){
        if(string[i] == '\n'){
            string[i] = '\0';
        }
    }
}

int main(){
    int idas, i, venda, j, compra, k;
    float precoFinal = 0;

    scanf("%d%*c", &idas);

    for(i = 0; i < idas; i++){
        scanf("%d%*c", &venda);
        char prodVenda[venda][1000];
        float precoVenda[venda];
        for(j = 0; j < venda; j++){
            scanf("%s %f%*c", &prodVenda[j], &precoVenda[j]);
        }
        scanf("%d%*c", &compra);
        char prodCompra[compra][1000];
        float precoCompra[compra];
        for(j = 0; j < compra; j++){
            scanf("%s %f%*c", &prodCompra[j], &precoCompra[j]);
        }
        for(j = 0; j < compra; j++){
            for(k = 0; k < venda; k++){
                if(strcmp(prodCompra[j], prodVenda[k]) == 0){
                    precoFinal = precoFinal + (precoCompra[j] * precoVenda[k]);
                }
            }
        }
        printf("R$ %.2f\n", precoFinal);
        precoFinal = 0;
    }
    return 0;
}
