#include <stdio.h>
#include <math.h>

int EhPrimo(int numero, int raiz){
    int i, ehprimo = 1;
    for(i = 2; i <= raiz; i++){
        if(numero%i == 0){
            ehprimo = 0;
        }
    }
    if (numero == 1){
        ehprimo = 0;
    }
    return ehprimo;
}

int main(void){
    int vezes, i, ehprimo;
    long long numero;
    double raiz;

    scanf("%d", &vezes);

    for(i = 1; i <= vezes; i++){
        scanf("%lld", &numero);
        raiz = sqrt(numero);
        ehprimo = EhPrimo(numero, raiz);

        if(ehprimo == 1){
            printf("Prime\n");
        }else{
            printf("Not Prime\n");
        }
    }
    return 0;
}
