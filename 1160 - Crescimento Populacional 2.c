#include <stdio.h>

void CrescPop(int popA, int popB, double crescA, double crescB){
    int anos = 0;

    while(popA <= popB){
        anos += 1;
        if(anos > 100){
            printf("Mais de 1 seculo.\n");
            break;
        }
        popA = popA + (popA*crescA/100);
        popB = popB + (popB*crescB/100);
    }
    if(anos <= 100){
        printf("%d anos.\n", anos);
    }
}

int main(void){
    int testes, i, popA, popB;
    double crescA, crescB;

    scanf("%d", &testes);

    for(i = 1; i <= testes; i++){
        scanf("%d%d%lf%lf", &popA, &popB, &crescA, &crescB);

        CrescPop(popA, popB, crescA, crescB);
    }

    return 0;
}
