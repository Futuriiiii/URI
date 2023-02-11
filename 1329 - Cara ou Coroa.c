#include <stdio.h>

int main(void){
    int jogos = 1, moeda, i;
    int contadorMaria, contadorJoao;

    while(jogos != 0){
        scanf("%d", &jogos);
        contadorMaria = 0;
        contadorJoao = 0;
        for(i = 1; i <= jogos; i++){
            scanf("%d", &moeda);
            if(moeda == 0)
                contadorMaria++;
            else if(moeda == 1)
                contadorJoao++;
        }if(jogos != 0)
            printf("Mary won %d times and John won %d times\n", contadorMaria, contadorJoao);
    }

    return 0;
}
