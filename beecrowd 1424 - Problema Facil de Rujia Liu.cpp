#include <stdio.h>
#include <vector>

#define TAM_MAX 1000000

using namespace std;
 
int main() {

    int elementos_vet, consultas, ocorrencia, numero;

    while(scanf("%d%d", &elementos_vet, &consultas) != EOF)
    {
        vector<vector<unsigned int>> vet(TAM_MAX);

        unsigned int elemento;
        
        for(auto i = 0; i < elementos_vet; i++)
        {
            scanf("%d", &elemento);
            
            vet[elemento - 1].push_back(i + 1);
        }

        for(auto i = 0; i < consultas; i++)
        {
            scanf("%d%d", &ocorrencia, &numero);

            if(vet[numero - 1].size() >= ocorrencia)
            {
                printf("%u\n", vet[numero - 1][ocorrencia - 1]);
            }else
            {
                printf("0\n");
            }
        }
    }
 
    return 0;
}
