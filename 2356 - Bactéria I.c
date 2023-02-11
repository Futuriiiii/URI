#include <stdio.h>
#include <string.h>

void TirarNovaLinha(char *string){
    int i;
    for(i = 0; string[i] != '\0'; i++){
        if(string[i] == '\n'){
            string[i] = '\0';
        }
    }
}

int main(){
    char dna[200], resis[200];
    char *contem;

    while(scanf("%[^\n]%*c", dna) != EOF){

        fgets(resis, 200, stdin);
        TirarNovaLinha(resis);

        contem = strstr(dna, resis);

        if(!contem){
            printf("Nao resistente\n");
        }else{
            printf("Resistente\n");
        }
    }
    return 0;
}
