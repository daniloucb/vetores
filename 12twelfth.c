#include <stdio.h>

int main()
{
    int vetor[5], i, biggest, lowest, total = 0;
    float media;

    for(i = 0; i < 5; i++)
    {
        printf("digite um número para a posição %d: ", i+1);
        scanf("%d", &vetor[i]);

        total += vetor[i];
    }


    biggest = vetor[0];
    lowest = vetor[0];
    media = (float)total / 5;

    for(i = 0; i < 5; i++)
        printf("index %d: %d\n", i, vetor[i]);

    for (i = 1; i < 5; i++) {
        if (vetor[i] > biggest) {
            biggest = vetor[i];
        }
        if (vetor[i] < lowest) {
            lowest = vetor[i];
        }
    }

    printf("o maior valor do vetor é: %d\n", biggest);
    printf("o menor valor do vetor é: %d\n", lowest);
    printf("a media do vetor é: %.2f\n", media);
    
    return 0;
};
