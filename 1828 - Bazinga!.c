#include <stdio.h>
#include <string.h>

int main(){
    int i, casos, valor;
    char sheldon[20], raj[20];

    scanf("%d%*c", &casos);

    for(i = 0; i < casos; i++){
        scanf("%s %s", sheldon, raj);

        /* quando for empate */
        if(strcmp(sheldon, raj) == 0){
            printf("Caso #%d: De novo!\n", i+1);
            continue;
        }
        /* if - quando sheldon ganha / else - quando raj ganha */

        if( strcmp(sheldon, "tesoura") == 0 && strcmp(raj, "papel") == 0 || strcmp(sheldon, "papel") == 0 && strcmp(raj, "pedra") == 0 || strcmp(sheldon, "pedra") == 0 && strcmp(raj, "lagarto") == 0 || strcmp(sheldon, "lagarto") == 0 && strcmp(raj, "Spock") == 0 || strcmp(sheldon, "Spock") == 0 && strcmp(raj, "tesoura") == 0 ||
            strcmp(sheldon, "tesoura") == 0 && strcmp(raj, "lagarto") == 0 || strcmp(sheldon, "lagarto") == 0 && strcmp(raj, "papel") == 0 || strcmp(sheldon, "papel") == 0 && strcmp(raj, "Spock") == 0 || strcmp(sheldon, "Spock") == 0 && strcmp(raj, "pedra") == 0 || strcmp(sheldon, "pedra") == 0 && strcmp(raj, "tesoura") == 0){
            printf("Caso #%d: Bazinga!\n", i+1);
        }else{
            printf("Caso #%d: Raj trapaceou!\n", i+1);
        }
    }
    return 0;
}
