#include <stdio.h>

void TirarConsoante(char *string){
    int i, aux = 0;

    for(i = 0; string[i] != '\0'; i++){
        if(string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u'){
            string[aux] = string[i];
            aux++;
        }
    }
    string[aux] = '\0';
}

void EhEngracado(const char *string){
    int i, contador = -1, engracado;

    for(i = 0; string[i] != '\0'; i++){
        contador++;
    }
    for(i = 0; string[i] != '\0'; i++){
        if(string[i] == string[contador-i]){
            engracado = 1;
        }else{
            engracado = 0;
            break;
        }
    }
    if(engracado){
        printf("S\n");
    }else{
        printf("N\n");
    }
}

int main(){
    int i;
    const char risada[51];

    fgets(risada, 51, stdin);
    TirarConsoante(risada);
    EhEngracado(risada);

    return 0;
}

