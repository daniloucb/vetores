#include <stdio.h>

int main()
{
    int vetor[10], i, amountNegatives = 0, sumPositives = 0;

    for(i = 0; i < 10; i++)
    {


        printf("digite um número para a posição %d: ", i+1);
        scanf("%d", &vetor[i]);

        if(vetor[i] > 0)
            sumPositives += vetor[i];
        else
            amountNegatives++;
    }

    printf("quantidade de negativos: %d\n", amountNegatives);
    printf("soma dos positivos: %d\n", sumPositives);
    
    return 0;
};
