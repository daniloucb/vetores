#include <stdio.h>

int main()
{
    int vetor[10], vetorQuad[10], i;

    for(i = 0; i < 10; i++)
    {
        printf("digite na posição %d: ", i);
        scanf("%d", &vetor[i]);
        vetorQuad[i] = vetor[i] * vetor[i];
    }

    for(i = 0; i < 10; i++)
    {
        printf("ao quadrado: %d\n", vetorQuad[i]);
    }
    
    return 0;
};
