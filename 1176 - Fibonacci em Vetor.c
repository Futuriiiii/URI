#include <stdio.h>

unsigned long long Fib(int termo){
    int i;
    unsigned long long fibo, fibo1 = 0, fibo2 = 1;

    if(termo != 0 && termo != 1){
        for(i = 0; i < termo-1; i++){
            fibo = fibo1 + fibo2;
            fibo1 = fibo2;
            fibo2 = fibo;
        }
    }
    if(termo == 0){
        fibo = 0;
    }

    if(termo == 1){
        fibo = 1;
    }

    return fibo;
}

int main(void){
    int n, i, numero;
    unsigned long long fibo;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        scanf("%d", &numero);
        fibo = Fib(numero);
        printf("Fib(%d) = %llu\n", numero, fibo);
    }
    return 0;
}
