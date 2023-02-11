#include <stdio.h>

int Beto(int x, int y){
    int B;

    B = 2 * (x * x) + (5 * y) * (5 * y);

    return B;
}

int Carlos(int x, int y){
    int C;

    C = -100 * x + y * y * y;

    return C;
}

int Rafael(int x, int y){
    int R;

    R = (3 * x) * (3 * x) + y * y;

    return R;
}

int main(void){
    int rep, i, x, y, beto, carlos, rafael;

    scanf("%d", &rep);

    for(i = 1; i <= rep; i++){
        scanf("%d%d", &x, &y);
        beto = Beto(x, y);
        carlos = Carlos(x, y);
        rafael = Rafael(x, y);
        if(beto > carlos && beto > rafael){
            printf("Beto ganhou\n");
        }
        if(carlos > beto && carlos > rafael){
            printf("Carlos ganhou\n");
        }
        if(rafael > beto && rafael > carlos){
            printf("Rafael ganhou\n");
        }
    }

    return 0;
}
