#include <stdio.h>
#include <math.h>

void Fibonacci(unsigned n){
    double fibo;

    fibo = (pow(((1 + sqrt(5))/2), n) - pow(((1 - sqrt(5))/2), n)) / sqrt(5);

    printf("%.1lf\n", fibo);
}

int main(){
    unsigned n;

    scanf("%d", &n);

    Fibonacci(n);

    return 0;
}
