#include <stdio.h>

int main(void){
    int n, i, soma, perfeito, quant;

    scanf("%d", &quant);
    for(; quant > 0; quant = quant - 1){
        scanf("%d", &n);

        soma = 0;
        for(i = 1; i <= n; i = i + 1){
            if(n%i == 0){
                soma = soma + i;
            }
        }perfeito = soma - n;
        if(n == perfeito){
            printf("%d eh perfeito\n", n);
        }else{
            printf("%d nao eh perfeito\n", n);
        }
    }
    return 0;
}
