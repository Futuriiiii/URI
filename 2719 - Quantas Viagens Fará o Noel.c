#include <stdio.h>

int main(void){
    int casos, i, quantPresentes, pesoMax, j , pesoPresente, soma, viagens;

    scanf("%d", &casos);

    for(i = 1; i <= casos; i++){
        scanf("%d %d", &quantPresentes, &pesoMax);
        soma = 0;
        viagens = 0;
        for(j = 1; j <= quantPresentes; j++){
            scanf("%d", &pesoPresente);
            soma = soma + pesoPresente;

            if(soma > pesoMax){
                soma = soma - pesoPresente;
                viagens += 1;
                continue;
            }
        }
        if(soma < pesoMax || soma == pesoMax){
            viagens += 1;
            printf("%d\n", viagens);
            continue;
        }

    }

    return 0;
}
