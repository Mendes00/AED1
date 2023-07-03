#include <stdio.h>
#include <stdlib.h>

/*5. Fac¸a um programa que leia um numero N e: ´
• Crie dinamicamente e leia um vetor de inteiro de N posic¸oes; ˜
• Leia um numero inteiro X e conte e mostre os m ´ ultiplos desse n ´ umero que existem ´
no vetor.*/

int main()
{
    int i, n, escolha, cont = 0;

    printf("Digite um numero qualquer: ");
    scanf("%d", &n);

    int *vet = (int *)malloc(n * sizeof(int));

    if (vet == NULL)
    {
        printf("ERRO NA ALOCAÇÃO DE MEMORIA");
    }
    

    for (i = 0; i < n; i++)
    {
        printf("Digite o vetor: ");
        scanf("%d", &vet[i]);
    }

    printf("\n\nDigite o numero que vc quer saber quando multiplos existem no vetor: ");
    scanf("%d", &escolha);

    for (i = 0; i < n; i++)
    {
        if (vet[i] % escolha == 0)
        {
            cont++;
        }
    }

    printf("\n\ncont: %d", cont);

    free(vet);
}