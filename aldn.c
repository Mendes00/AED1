#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[30];
    int idade;
    int altura;
} Pessoa;

int main() {
    Pessoa *pessoas;
    int quantidade = 0;
    char resposta[5];

    do {
        // Realoca a memória para acomodar uma pessoa adicional
        pessoas = (Pessoa *)realloc(pessoas, (quantidade + 1) * sizeof(Pessoa));
        if (pessoas == NULL) {
            printf("Erro ao alocar memória.\n");
            return 1;
        }

        printf("Digite o nome: ");
        scanf("%s", pessoas[quantidade].nome);

        printf("Digite a idade: ");
        scanf("%d", &pessoas[quantidade].idade);

        printf("Digite a altura: ");
        scanf("%d", &pessoas[quantidade].altura);

        quantidade++;

        printf("Deseja inserir os dados de outra pessoa? (sim/nao): ");
        scanf("%s", resposta);
    } while (strcmp(resposta, "nao") != 0);

    printf("\nDados das pessoas:\n");
    for (int i = 0; i < quantidade; i++) {
        printf("Pessoa %d\n", i+1);
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Idade: %d\n", pessoas[i].idade);
        printf("Altura: %d\n\n", pessoas[i].altura);
    }

    free(pessoas);

    return 0;
}
