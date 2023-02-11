#include <stdio.h>

int main(void){
    int resposta, p, i;
    int contador = 0;

    scanf("%d", &resposta);

    for(i = 0; i < 5; i++){
        scanf("%d", &p);
        if(p == resposta){
            contador++;
        }
    }

    printf("%d\n", contador);

    return 0;
}
