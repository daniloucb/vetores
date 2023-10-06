#include <stdio.h>

int main()
{
    int vetor[10], pares = 0, i;

    for(i = 0; i < 10; i++)
    {
        printf("digite na posição %d: ", i);
        scanf("%d", &vetor[i]);
        vetor[i] % 2 == 0 && pares++;
    }

    printf("o vetor possui %d pares", pares);
    
    return 0;
};
