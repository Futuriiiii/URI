#include <stdio.h>

int ValidacaoSenha(const char *senha){
    int i, j, contador, valido, achou;
    contador = valido = 0;
    achou = 0;

    /* verifica tamanho */
    for(i = 0; senha[i] != '\0'; i++){
        contador++;
    }

    if(contador >= 6 && contador <= 32){
        valido++;
    }else{
        valido = 0;

    }

    if(valido == 0){
        return valido;
    }

    /* verifica se tem letra minuscula */
    for(i = 0; senha[i] != '\0'; i++){
        for(j = 'a'; j <= 'z'; j++){
            if(senha[i] == j){
                valido++;
                achou = 1;
                break;
            }
        }
        if(achou == 1){
            achou = 0;
            break;
        }
    }

    /* verifica se tem letra maiuscula */
    for(i = 0; senha[i] != '\0'; i++){
        for(j = 'A'; j <= 'Z'; j++){
            if(senha[i] == j){
                valido++;
                achou = 1;
                break;
            }
        }
        if(achou == 1){
            achou = 0;
            break;
        }
    }

    /* verifica se tem numero */
    for(i = 0; senha[i] != '\0'; i++){
        for(j = '0'; j <= '9'; j++){
            if(senha[i] == j){
                valido++;
                achou = 1;
                break;
            }
        }
        if(achou == 1){
            achou = 0;
            break;
        }
    }

    /* verifica se tem algo alem de letras e numeros */
    for(i = 0; senha[i] != '\0'; i++){
        for(j = ' '; j < '0'; j++){
            if(senha[i] == j){
                valido = 0;
            }
        }
    }
    for(i = 0; senha[i] != '\0'; i++){
        for(j = ':'; j < 'A'; j++){
            if(senha[i] == j){
                valido = 0;
            }
        }
    }
    for(i = 0; senha[i] != '\0'; i++){
        for(j = '['; j < 'a'; j++){
            if(senha[i] == j){
                valido = 0;
            }
        }
    }
    for(i = 0; senha[i] != '\0'; i++){
        for(j = '{'; j <= '~'; j++){
            if(senha[i] == j){
                valido = 0;
            }
        }
    }
    return valido;
}

int main(){
    int valido;
    char senha[100];

    while(scanf("%[^\n]%*c", senha) != EOF){

        valido = ValidacaoSenha(senha);
        if(valido == 4){
            printf("Senha valida.\n");
        }else{
            printf("Senha invalida.\n");
        }
    }
    return 0;
}
