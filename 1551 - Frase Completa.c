#include <stdio.h>

void VerificaFrase(const char *frase){
    int i, j, contador = 0;
    int arAux[26];

    for(i = 0; i < 26; i++){
        arAux[i] = 0;
    }
    for(i = 0; frase[i] != '\0'; i++){
        for(j = 'a'; j <= 'z'; j++){
            if(frase[i] == j){
                arAux[j - 'a'] = 1;
            }
        }
    }
    for(i = 0; i < 26; i++){
        if(arAux[i] == 1){
            contador++;
        }
    }
    if(contador == 26){
        printf("frase completa\n");
    }
    if(contador >= 12 && contador < 26){
        printf("frase quase completa\n");
    }
    if(contador < 12){
        printf("frase mal elaborada\n");
    }
}

int main(){
    int i, testes;
    char frase[1002];

    scanf("%d%*c", &testes);

    for(i = 0; i < testes; i++){
        fgets(frase, 1002, stdin);
        VerificaFrase(frase);
    }

    return 0;
}
