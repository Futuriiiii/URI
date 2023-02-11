#include <stdio.h>
#include <math.h>

int main(void){
    int vezes, i, j, ehprimo;
    long long numero;
    double raiz;

    scanf("%d", &vezes);

    for(i = 1; i <= vezes; i++){
        scanf("%lld", &numero);
        raiz = sqrt(numero);
        ehprimo = vezes > 0 && vezes!= 1;
        for(j = 2; j <= raiz; j++){
            if(numero%j == 0){
                ehprimo = 0;
            }
        }
        if(ehprimo == 1){
            if(numero == 1){
                printf("Not Prime\n");
                continue;
            }
            printf("Prime\n");
        }else{
            printf("Not Prime\n");
        }
    }
    return 0;
}
