#include <stdio.h>
#include <stdlib.h>

/*
Fac¸a um programa que armazene em um registro de dados (estrutura composta) os dados de um funcionario de uma empresa, compostos de: Nome, Idade, Sexo (M/F), CPF, ´
Data de Nascimento, Codigo do Setor onde trabalha (0-99), Cargo que ocupa (string de ´
ate 30 caracteres) e Sal ´ ario. Os dados devem ser digitados pelo usu ´ ario, armazenados ´
na estrutura e exibidos na tela.*/

typedef struct
{
    int dia, mes, ano, codigoSetor;
    float salario;
    char cargo[30];
} registro;

registro lerregistro()
{
    registro funcionario;

    printf("\n\nDigite sua data de nascimento no formato dd mm aaaa: ");
    scanf("%d%d%d", &funcionario.dia, &funcionario.mes, &funcionario.ano);

    printf("Digite o codigo do setor onde voce trabalha: ");
    scanf("%d", &funcionario.codigoSetor);

    printf("Digite o cargo que voce ocupa: ");
    scanf("%s", funcionario.cargo);

    printf("Digite o seu salario por extenso. (exemplo:1200.00): ");
    scanf("%f", &funcionario.salario);

    return funcionario;
}

void imprimirpessoa(registro p){

    printf("\n\nData de nascimento: %d/%d/%d", p.dia, p.mes, p.ano);

    printf("\nCodigo do setor: %d", p.codigoSetor);

    printf("\nCargo que ocupa: %s", p.cargo);

    printf("\nSalario: %.2f", p.salario);
}



int main()
{

    registro funcionario;

    funcionario = lerregistro();

    imprimirpessoa(funcionario);

}