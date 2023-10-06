#include <stdio.h>

int main()
{
    int vetor[5], i, biggestPosition, lowestPosition, biggest, lowest;

    for(i = 0; i < 5; i++)
    {
        printf("digite um número para a posição %d: ", i+1);
        scanf("%d", &vetor[i]);
    }


    biggest = vetor[0];
    lowest = vetor[0];

    for (i = 1; i < 5; i++) {
        if (vetor[i] > biggest) {
            biggestPosition = i;
        }
        if (vetor[i] < lowest) {
            lowestPosition = i;
        }
    }

    printf("a posição do maior valor do vetor é: %d\n", biggestPosition);
    printf("a posição do menor valor do vetor é: %d\n", lowestPosition);
    
    return 0;
};
