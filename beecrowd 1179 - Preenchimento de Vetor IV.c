#include <stdio.h>

#define QUANT 15
 
int main() {
 
    int par[5], impar[5];
    int num, odd, even;
    
    odd = even = 0;
    
    for(int i = 0; i < QUANT; i++)
    {
        scanf("%d", &num);
        
        if(num%2 == 0)
        {
            par[even] = num;
            even++;

            if(even == 5)
            {
                for(int j = 0; j < 5; j++)
                {
                    printf("par[%d] = %d\n", j, par[j]);
                }
                even = 0;
            }
        }else
        {
            impar[odd] = num;
            odd++;

            if(odd == 5)
            {
                for(int j = 0; j < 5; j++)
                {
                    printf("impar[%d] = %d\n", j, impar[j]);
                }
                odd = 0;
            }
        }
    }
    for(int j = 0; j < odd; j++)
    {
        printf("impar[%d] = %d\n", j, impar[j]);
    }
    
    for(int j = 0; j < even; j++)
    {
        printf("par[%d] = %d\n", j, par[j]);
    }
 
    return 0;
}