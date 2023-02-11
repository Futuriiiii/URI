#include <stdio.h>

int main(void){
    int n, i, fibo, fibo1 = 0, fibo2 = 1;

    scanf("%d", &n);
    printf("0 1 ");
    for(i = 0; i < n-3; i++){
        fibo = fibo1 + fibo2;
        printf("%d ", fibo);
        fibo1 = fibo2;
        fibo2 = fibo;

    }printf("%d", fibo = fibo1 + fibo2);

    return 0;
}
