#include <stdio.h>

int main(void){
    int i, teste, r1, r2, rFinal;

    scanf("%d", &teste);

    for(i = 1; i <= teste; i = i + 1){
        scanf("%d %d", &r1, &r2);
        rFinal = r1 + r2;
        printf("%d\n", rFinal);
    }

    return 0;
}
