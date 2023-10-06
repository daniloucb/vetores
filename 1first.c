#include <stdio.h>

int main()
{
    int A[6] = {1, 0, 5, -2, -5, 7}, i;
    int soma = A[0] + A[1] + A[5];

    printf("resultado da soma: %d\n", soma);

    A[4] = 100;
    for(i = 0; i < 6; i++)
    {
        printf("valor na posição %d: %d\n", i, A[i]);
    }

    return 0;
};
