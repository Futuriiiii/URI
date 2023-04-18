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

            if (soma == pesoMax){
                viagens++;
                soma = 0;
            }
            else if(soma > pesoMax){
                soma = pesoPresente;
                viagens += 1;
            }
        }
        if(soma > 0 && soma < pesoMax){
            viagens += 1;
        }

        printf("%d\n", viagens);

    }

    return 0;
}
