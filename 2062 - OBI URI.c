#include <stdio.h>
#include <string.h>

int main(){
    int quant, i;
    char palavra[21];

    scanf("%d%*c", &quant);

    for(i = 0; i < quant; i++){
        scanf("%s", palavra);

        if(strlen(palavra) == 3){
            if(palavra[0] == 'U' && palavra[1] == 'R'){
                palavra[2] = 'I';
            }
            if(palavra[0] == 'O' && palavra[1] == 'B'){
                palavra[2] = 'I';
            }
        }
        printf("%s", palavra);
        if(i != quant-1){
            printf(" ");
        }else{
            printf("\n");
        }
    }

    return 0;
}
