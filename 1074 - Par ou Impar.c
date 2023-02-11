#include <stdio.h>

int main(void){
    int i, n, teste;

    scanf("%d", &n);

    for(i = 1; i <= n; i = i + 1){
        scanf("%d", &teste);
        if(teste == 0){
            printf("NULL\n");
        }if(teste < 0 && teste%2 == 0){
            printf("EVEN NEGATIVE\n");
        }if(teste < 0 && teste%2 != 0){
            printf("ODD NEGATIVE\n");
        }if(teste > 0 && teste%2 == 0){
            printf("EVEN POSITIVE\n");
        }if(teste > 0 && teste%2 != 0){
            printf("ODD POSITIVE\n");
        }

    }

    return 0;
}
