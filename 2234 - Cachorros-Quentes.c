#include <stdio.h>

int main(void){
    int pessoas, hotdog;
    double media;

    scanf("%d%d", &hotdog, &pessoas);

    media = hotdog*1.0/pessoas;

    printf("%.2lf\n", media);

    return 0;
}
