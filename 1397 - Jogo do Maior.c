#include <stdio.h>

int main(void){
    int n, i, Og, Filho, somaOg, somaFilho;

    while(1){
        somaOg = somaFilho = 0;
        scanf("%d", &n);
        if(n == 0){
            break;
        }
        for(i = 1; i <= n; i++){
            scanf("%d%d", &Og, &Filho);
            if(Og > Filho){
                somaOg += 1;
            }else if(Filho > Og){
                somaFilho += 1;
            }
        }printf("%d %d\n", somaOg, somaFilho);
    }
    return 0;
}
