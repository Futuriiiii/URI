#include <stdio.h>
#include <math.h>

float DistanciaEntreBolas(int xBranca, int yBranca, int xBola, int yBola){
    float dist;

    dist = sqrt(pow(xBranca - xBola, 2) + pow(yBranca - yBola, 2));

    return dist;
}

int main(){
    int i, j;
    int repet, bolasFaltam, xBranca, yBranca, x, y, salvarNum;
    float distAn, distAt, salvarDist;

    scanf("%d", &repet);
    for(i = 1; i <= repet; i++){
        scanf("%d", &bolasFaltam);
        scanf("%d%d", &xBranca, &yBranca);
        scanf("%d%d", &x, &y);
        salvarDist = DistanciaEntreBolas(xBranca, yBranca, x, y);
        salvarNum = 1;
        for(j = 2; j <= bolasFaltam; j++){
            scanf("%d%d", &x, &y);
            distAt = DistanciaEntreBolas(xBranca, yBranca, x, y);
            if (distAt < salvarDist){
                salvarNum = j;
                salvarDist = distAt;
            }
        }
        printf("%d\n", salvarNum);
    }

    return 0;

}
