#include <stdio.h>

int main(void){
    int n, i, quant;
    char animal;
    int total, totalCoelho = 0, totalRato = 0, totalSapo = 0;

    scanf("%d%*c", &n);
    for(i = 0; i < n; i++){
        scanf("%d%*c %c", &quant, &animal);
        if(animal == 'C'){
            totalCoelho = totalCoelho + quant;
        }else if(animal == 'R'){
            totalRato = totalRato + quant;
        }else if(animal == 'S'){
            totalSapo = totalSapo + quant;
        }
    }total = totalCoelho + totalRato + totalSapo;

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", totalCoelho);
    printf("Total de ratos: %d\n", totalRato);
    printf("Total de sapos: %d\n", totalSapo);
    printf("Percentual de coelhos: %.2f %%\n", (double) (totalCoelho*100)/total);
    printf("Percentual de ratos: %.2f %%\n", (double) (totalRato*100)/total);
    printf("Percentual de sapos: %.2f %%\n", (double) (totalSapo*100)/total);

    return 0;
}
