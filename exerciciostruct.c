#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Utilizando uma estrutura, faca um programa que permita a entrada de nome, endereco e
telefone de 5 pessoas e os imprima em ordem alfabetica.*/

typedef struct
{
    char nome[15];
    char endereço[20];
    int telefone;

} cadastro;

int comparar_nomes(const void *a, const void *b)
{
    const cadastro *pessoa1 = (const cadastro *)a;
    const cadastro *pessoa2 = (const cadastro *)b;
    return strcmp(pessoa1->nome, pessoa2->nome);
}

void imprimir_ordem_alfabetica(cadastro pessoa[], int tamanho)
{
    qsort(pessoa, tamanho, sizeof(cadastro), comparar_nomes);

    printf("Informações em ordem alfabética:\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("Nome: %s\n", pessoa[i].nome);
        printf("Endereço: %s\n", pessoa[i].endereço);
        printf("Telefone: %d\n", pessoa[i].telefone);
        printf("-----------------\n");
    }
}

int main()
{
    cadastro pessoa[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Digite seu nome: ");
        scanf("%s", pessoa[i].nome);

        printf("Digite seu endereço: ");
        scanf("%s", pessoa[i].endereço);

        printf("Digite seu telefone: ");
        scanf("%d", &pessoa[i].telefone);
    }

    imprimir_ordem_alfabetica(pessoa, 5);
}