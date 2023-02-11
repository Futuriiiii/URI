#include <stdio.h>

void QuantosLEDS(const char *numeros){
    /*
    Numero 1 = 2 leds
    Numero 2 = 5 leds
    Numero 3 = 5 leds
    Numero 4 = 4 leds
    Numero 5 = 5 leds
    Numero 6 = 6 leds
    Numero 7 = 3 leds
    Numero 8 = 7 leds
    Numero 9 = 6 leds
    Numero 0 = 6 leds
    */
    int i, contador = 0;

    for(i = 0; numeros[i] != '\0'; i++){
        if(numeros[i] == '1'){
            contador += 2;
        }
        if(numeros[i] == '2' || numeros[i] == '3' || numeros[i] == '5'){
            contador += 5;
        }
        if(numeros[i] == '4'){
            contador += 4;
        }
        if(numeros[i] == '6' || numeros[i] == '9' || numeros[i] == '0'){
            contador += 6;
        }
        if(numeros[i] == '7'){
            contador += 3;
        }
        if(numeros[i] == '8'){
            contador += 7;
        }
    }
    printf("%d leds\n", contador);
}

int main(){
    int valores, i;
    const char seq[101];

    scanf("%d%*c", &valores);

    for(i = 0; i < valores; i++){
        scanf("%s", &seq);
        QuantosLEDS(seq);
    }

    return 0;
}
