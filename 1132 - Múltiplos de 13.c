#include <stdio.h>

int main(void){
    int a, b, i, aux, soma = 0;

    scanf("%d%d", &a, &b);

    if(a > b){
        aux = a;
        a = b;
        b = aux;
    }
    for(i = a; i <= b; i++){
        if(i%13 != 0){
            soma += i;
        }
    }
    printf("%d\n", soma);
    return 0;
}
