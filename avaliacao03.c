#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct registro_produtos
{
    char nome[200];
    float preco;
    int quantidadeEstoque;
};

//Nessa função usei IA para corrigir um erro pois ela não estava subtratindo a quantidade do estoque e eu não sabia o pq
void realizarCompra(struct registro_produtos *produto) {
    int quantidadeProduto;
    printf("Digite a quantidade a ser comprada: ");
    scanf("%d", &quantidadeProduto);

        produto->quantidadeEstoque -= quantidadeProduto;
        printf("Compra efetuada!\n");
}

float calcularPrecoTotal(struct registro_produtos produto){
    return produto.preco * produto.quantidadeEstoque;
}


void consultarEstoque(struct registro_produtos produto){
    printf("Nome do produto: %s\n", produto.nome);
    printf("Quantidade em estoque: %d\n", produto.quantidadeEstoque);
    printf("Preço unitário: %.2f\n", produto.preco);
    printf("Valor total do estoque: %.2f\n\n", calcularPrecoTotal(produto));
}

int main(){
    setlocale(LC_ALL, "portuguese");
    struct registro_produtos produto;

    strcpy(produto.nome, "Coca-Cola");
    produto.preco = 5.00;
    produto.quantidadeEstoque = 100;

    int opcao;

    do
    {
        printf("1 - Realizar uma compra\n");
        printf("2 - Consultar estoque\n");
        printf("3 - Sair do programa\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);

        system("cls || clear");

        if (opcao == 1) {
            realizarCompra(&produto);
        }else if (opcao == 2) {
            consultarEstoque(produto);
        }else if (opcao == 3) {
            printf("Fechando programa !");
        }
         
    } while (opcao != 3);
    return 0;
}
