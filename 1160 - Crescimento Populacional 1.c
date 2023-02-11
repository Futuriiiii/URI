#include <stdio.h>

int main(void){
    int n, i, popA, popB, anos;
    double crescA, crescB;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        anos = 0;
        scanf("%d%d%lf%lf", &popA, &popB, &crescA, &crescB);
        for(popA, popB; popA <= popB; popA = popA + (popA*crescA/100), popB = popB + (popB*crescB/100)){
            anos += 1;
            if(anos > 100){
            printf("Mais de 1 seculo.\n");
            break;
            }
        }if(anos <= 100){
            printf("%d anos.\n", anos);
        }
    }

    return 0;
}
