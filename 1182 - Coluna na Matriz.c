#include <stdio.h>

#define TAM_MATRIZ 12

int main(){
    int coluna, i, j;
    double matriz[TAM_MATRIZ][TAM_MATRIZ], soma = 0;
    char op;

    scanf("%d%*c", &coluna);
    scanf("%c", &op);

    for(i = 0; i < TAM_MATRIZ; i++){
        for(j = 0; j < TAM_MATRIZ; j++){
            scanf("%lf", &matriz[i][j]);
        }
    }

    for(i = 0; i < TAM_MATRIZ; i++){
        soma += matriz[i][coluna];
    }

    if(op == 'S'){
        printf("%.1lf\n", soma);
    }else{
        printf("%.1lf\n", soma/TAM_MATRIZ);
    }

    return 0;
}
