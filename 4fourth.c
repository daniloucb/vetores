#include <stdio.h>

int main()
{
    int vetor[8], resultado, i, x, y;

    for(i = 0; i < 8; i++)
    {
        printf("digite na posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("digite a posição do primeiro vetor: ");
    scanf("%d", &x);
    printf("digite a posição do segundo vetor: ");
    scanf("%d", &y);

    resultado = vetor[x] + vetor[y];
    printf("resultado: %d\n", resultado);

    
    return 0;
};
