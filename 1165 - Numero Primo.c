#include <stdio.h>

int main(void){
    int n, i, soma, quant;

    quant = 1;
    //scanf("%d", &quant);

    for(; quant > 0; quant = quant - 1){
        n = 103;
        //scanf("%d", &n);
        soma = 0;
        for(i = 1; i <= n; i = i + 1){
                if(n%i == 0){
                    soma = soma + 1;
                }
            }
            if (soma == 2){
                printf("%d eh primo\n", n);
            }else{
                printf("%d nao eh primo\n", n);
            }
    }

    return 0;
}
