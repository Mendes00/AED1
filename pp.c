#include <stdio.h>
#include <stdlib.h>

/*Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas.
Imprima o enderec¸o de cada posic¸ao dessa matriz.*/

int main()
{

    float mt[3][3];
    int l, c;

    for (l = 0; l < 3; l++)
    {
        for (c = 0; c < 3; c++)
        {
            printf("Digite algum numero: ");
            scanf("%f", &mt[l][c]);
        }
    }
    for (l = 0; l < 3; l++)
    {
        for (c = 0; c < 3; c++)
        {
            printf("\n");
            printf("\nendereco na posicao[%d][%d]: %p", l, c, &mt[l][c]);
        }
    }
}