#include <stdio.h>

int main(void){
    int n, soma, quantidade;
    float media;

    n = 0;
    soma = 0;
    quantidade = 0;
    while(n >= 0){
        scanf("%d", &n);
        soma = soma + n;
        quantidade = quantidade + 1;
    }
    media = ((soma*1.0) - n)/(quantidade - 1);
    printf("%.2f\n", media);


    return 0;
}
