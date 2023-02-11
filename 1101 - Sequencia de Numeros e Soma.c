#include <stdio.h>

int main(void){
    int a, b, c, i, soma;

    do{
        soma = 0;
        scanf("%d %d", &a, &b);

        if(a > b);
        else{
            c = a;
            a = b;
            b = c;
    }
        for(i = b; i <= a; i = i + 1){
            if(a > 0 && b > 0){
                printf("%d ", i);
                soma = soma + i;
            }
        }
        if(a > 0 && b > 0){
            printf("Sum=%d\n", soma);
        }
    }while(a > 0 && b > 0);

    return 0;
}
