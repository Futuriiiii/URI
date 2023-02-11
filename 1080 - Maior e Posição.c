#include <stdio.h>

int main(void){
    int n = 100, i, numero, numeroAntigo;
    int salvar, pos;

    numeroAntigo = 0;

    for(i = 1; i <= n; i = i + 1){
        scanf("%d", &numero);
        if(numero > numeroAntigo){
            salvar = numero;
            pos = i;
            numeroAntigo = numero;
        }
    }
    printf("%d\n", salvar);
    printf("%d\n", pos);

    return 0;
}
