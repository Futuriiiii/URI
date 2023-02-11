#include <stdio.h>

#define MAX 1000

void Bino(int ar[], int t){
    int i, cont2, cont3, cont4, cont5;

    cont2 = cont3 = cont4 = cont5 = 0;

    for(i = 0; i < t; i++){
        if(ar[i]%2 == 0){
            cont2++;
        }
        if(ar[i]%3 == 0){
            cont3++;
        }
        if(ar[i]%4 == 0){
            cont4++;
        }
        if(ar[i]%5 == 0){
            cont5++;
        }
    }

    printf("%d Multiplo(s) de 2\n"
           "%d Multiplo(s) de 3\n"
           "%d Multiplo(s) de 4\n"
           "%d Multiplo(s) de 5\n",
           cont2, cont3, cont4, cont5);

}

int main(){
    int testes, i;
    int ar[MAX];

    scanf("%d", &testes);

    for(i = 0; i < testes; i++){
        scanf("%d", &ar[i]);
    }
    Bino(ar, testes);

    return 0;
}
