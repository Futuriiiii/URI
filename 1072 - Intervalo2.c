#include <stdio.h>

int main(void){
    int quant, n, i, dentro, fora;

    dentro = fora = 0;
    scanf("%d", &quant);

    for(i = 1; i <= quant; i = i + 1){
        scanf("%d", &n);
        if( n >= 10 && n <= 20){
            dentro = dentro + 1;
        }else{
            fora = fora + 1;
        }
    }
    printf("%d in\n", dentro);
    printf("%d out\n", fora);

    return 0;
}
