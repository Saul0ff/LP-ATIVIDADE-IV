#include <stdio.h>
#include <stdlib.h>

    struct RegistroContaBancaria
    {
        char numeroDaConta[200];
        char nomeTitular[200];
        float saldoConta;
        char tipoPoupanca[200];
    };

float depositarOuSacar(float depositar, float sacar, struct RegistroContaBancaria contaBancaria){
    float saldoFinal;
    if (depositar != 0 && depositar > 0) {
        saldoFinal = contaBancaria.saldoConta + depositar;
    } else if (sacar != 0 && sacar < contaBancaria.saldoConta && sacar > 0)
    {
        saldoFinal = contaBancaria.saldoConta - sacar;
    }else{
        saldoFinal= contaBancaria.saldoConta;
    }
    
    return saldoFinal;
}

void exibirResultado(float valor, struct RegistroContaBancaria contaBancaria){
    printf("Numero da conta: %s\n", contaBancaria.numeroDaConta);
    printf("Nome do Titular: %s\n",contaBancaria.nomeTitular);
    printf("Saldo antigo: R$ %.2f\n", contaBancaria.saldoConta);
    printf("Saldo atual: R$ %.2f\n", valor);
    printf("Tipo da Conta: %s", contaBancaria.tipoPoupanca);
}

int main(){
    struct RegistroContaBancaria contaBancaria;
    int opcao;
    float depositarQuantidade = 0, sacarQuantidade = 0;

    printf("Digite o numero da conta: ");
    gets(contaBancaria.numeroDaConta);

    printf("Digite o nome do titular: ");
    gets(contaBancaria.nomeTitular);

    printf("Digite o saldo da conta: ");
    scanf("%f", &contaBancaria.saldoConta);

    fflush(stdin);

    printf("Tipo da conta: ");
    gets(contaBancaria.tipoPoupanca);

    system("cls || clear");

    printf("\tBANCO\n");
    do
    {
        printf("1 - Depositar dinheiro na conta\n");
        printf("2 - Sacar dinheiro\n");
        printf("3 - Exibir o saldo\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Digite o valor que deseja depositar: ");
            scanf("%f", &depositarQuantidade);
            system("cls || clear");
        }else if (opcao == 2) {
            printf("Digite o valor que deseja sacar: ");
            scanf("%f", &sacarQuantidade);
            system("cls || clear");
        }else if (opcao == 3) {
            system("cls || clear");
            depositarOuSacar(depositarQuantidade, sacarQuantidade, contaBancaria);
            exibirResultado(depositarOuSacar(depositarQuantidade, sacarQuantidade, contaBancaria), contaBancaria);
        }
        
    } while (opcao != 3);
    return 0;
}