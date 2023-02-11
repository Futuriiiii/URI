#include <stdio.h>

long long Fatorial(int numero){
    int i;
    long long fatorial = 1;
    for(i = 1; i <= numero; i++){
            fatorial *= i;
    }
    return fatorial;
}

int main(void){
    int n1, n2;
    long long somaFat;

    while(scanf("%d%d", &n1, &n2) != EOF){
        somaFat = Fatorial(n1) + Fatorial(n2);
        printf("%lld\n", somaFat);
    }

    return 0;
}
