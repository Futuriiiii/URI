#include <stdio.h>

int main(void){
    int a, b, c, d, x, y, z;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    x = c+d;
    y = a+b;
    z = a%2;

    if(b > c && d > a && x > y && c > 0 && d > 0 && z == 0){
        printf("Valores aceitos\n");
    }else{
        printf("Valores nao aceitos\n");
    }

    return 0;
}
