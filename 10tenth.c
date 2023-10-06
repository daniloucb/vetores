#include <stdio.h>

int main()
{
    float notas[15], media, total = 0;
    int i;

    for(i = 0; i < 15; i++)
    {

        do
        {
            printf("digite a nota do aluno %d: ", i+1);
            scanf("%f", &notas[i]);
        }
        while(notas[i] > 10 || notas[i] < 0);

        total += notas[i];
    }

    media = (float)total / 15;

    printf("a média foi: %.2f\n", media);
    
    return 0;
};
