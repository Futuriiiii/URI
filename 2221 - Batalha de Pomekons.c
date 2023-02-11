#include <stdio.h>

float ValorGolpe(int atk, int def, int level, int bonus){
    float golpe;

    if(level % 2 == 0){
        golpe = (atk + def)/2 + bonus;
    }else{
        golpe = (atk + def)/2;
    }

    return golpe;
}

int main(void){
    int inst, i, bonus, atkD, defD, levD, atkG, defG, levG;
    float golpeD, golpeG;

    scanf("%d", &inst);

    for(i = 1; i <= inst; i++){
        scanf("%d", &bonus);
        scanf("%d%d%d", &atkD, &defD, &levD);
        scanf("%d%d%d", &atkG, &defG, &levG);
        golpeD = ValorGolpe(atkD, defD, levD, bonus);
        golpeG = ValorGolpe(atkG, defG, levG, bonus);
        if(golpeD > golpeG){
            printf("Dabriel\n");
        }
        if(golpeG > golpeD){
            printf("Guarte\n");
        }
        if(golpeD == golpeG){
            printf("Empate\n");
        }
    }

    return 0;
}
