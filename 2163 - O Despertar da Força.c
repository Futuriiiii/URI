#include <stdio.h>

int main(){
    int N, M, i, j, naoAchou = 1;

    scanf("%d%d", &N, &M);

    int matriz[N][M];

    for(i = 0; i < N; i++){
        for(j = 0; j < M; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < N; i++){
        for(j = 0; j < M; j++){
            if(matriz[i][j] == 42){
                if(matriz[i-1][j-1] == 7 && matriz[i-1][j] == 7 && matriz[i-1][j+1] == 7 &&
                   matriz[i][j-1] == 7 && matriz[i][j+1] == 7 &&
                   matriz[i+1][j-1] == 7 && matriz[i+1][j] == 7 && matriz[i+1][j+1] == 7){
                    printf("%d %d\n", i+1, j+1);
                    naoAchou = 0;
                }
            }
        }
    }

    if(naoAchou){
        printf("0 0\n");
    }

    return 0;
}
