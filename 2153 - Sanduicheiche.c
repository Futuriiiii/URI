#include <stdio.h>
#include <string.h>

int main(){
    int i, tam;
    char palavra[31];

    while(scanf("%[^\n]%*c", palavra) != EOF){
        tam = strlen(palavra);
        if(tam <= 3){
            printf("%s\n", palavra);
        }else{
            for(i = 0; i < tam; i++){
                if(palavra[i] == palavra[tam-2] && palavra[i+1] == palavra[tam-1]){
                    palavra[i+2] = '\0';
                }
            }
            printf("%s\n", palavra);
        }
    }
    return 0;
}
