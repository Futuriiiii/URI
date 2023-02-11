#include <stdio.h>
#include<math.h>

void Tabuleiro(int n){
    int i;
    unsigned long long graos, graosKg, soma = 0;

    /* 12 graos = 1 grama de graos
        1000 gramas = 1 Kg      */

    for(i = 0; i < n; i++){
        graos = pow(2, i);
        soma += graos;
    }
    graosKg = soma/(12*1000);
    printf("%llu kg\n", graosKg);

}

int main(){
    int N, i, X;

    scanf("%d", &N);

    for(i = 0; i < N; i++){
        scanf("%d", &X);
        Tabuleiro(X);
    }

    return 0;
}
