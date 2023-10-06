#include <stdio.h>

int main()
{
    int vetor[10], i, biggest, lowest;

    for(i = 0; i < 10; i++)
    {
        printf("digite na posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    biggest = vetor[0];
    lowest = vetor[0];

    for (i = 1; i < 10; i++) {
        if (vetor[i] > biggest) {
            biggest = vetor[i];
        }
        if (vetor[i] < lowest) {
            lowest = vetor[i];
        }
    }

    printf("o maior valor do vetor é: %d\n", biggest);
    printf("o menor valor do vetor é: %d\n", lowest);
    
    return 0;
};
