#include <stdio.h>

int main(void){
    int a, b;
    long long soma;

    soma = 0;
    scanf("%d %d", &a, &b);
    soma = (( (long long) a + b) * (b - a + 1)) / 2;
    printf("%lld\n", soma);

    return 0;
}
