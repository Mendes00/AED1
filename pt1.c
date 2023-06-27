#include <stdio.h>
#include <stdlib.h>

/*Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando
apenas aritmetica de ponteiros, leia esse array do teclado e imprima o dobro de cada ´
valor lido.
*/

int main(){
   
   int vet[5];
   int i;

   for (i = 0; i < 5; i++)
   {
    printf("Digite o vetor: ");
    scanf("%d", &vet[i]);
   }

   for (i = 0; i < 5; i++)
   {
    printf("\n%d", *(vet + i) * 2);
   }
   
   
}