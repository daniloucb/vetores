#include <stdio.h>

int main()
{
    int vetor[10], i, biggest, position;

    for(i = 0; i < 10; i++)
    {
        printf("digite na posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < 10; i++)
        printf("%d  ", vetor[i]);

    biggest = vetor[0];

    for (i = 1; i < 10; i++) {
        if (vetor[i] > biggest) {
            biggest = vetor[i];
            position = i;
        }
    }
    

    printf("o maior valor do vetor é: %d, na posição: %d\n", biggest, position);
    
    return 0;
};
