#include <stdio.h>

int main()
{
    int vetor[6], i;

    for(i = 0; i < 6; i++)
    {

        do
        {
            printf("digite na posição %d: ", i);
            scanf("%d", &vetor[i]);
        }
        while(vetor[i] % 2 != 0);

    }

    for(i = 5; i >= 0; i--)
        printf("%d\n", vetor[i]);
    
    return 0;
};
