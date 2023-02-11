#include <stdio.h>

int main(void){
    int quant, dias;
    float comida;

    scanf("%d", &quant);
    while(quant--){
        scanf("%f", &comida);
        dias = 0;
        while(comida > 1){
            comida /= 2;
            dias++;
        }printf("%d dias\n", dias);
    }

    return 0;
}
