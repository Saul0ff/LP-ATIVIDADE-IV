#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

    struct registroDeContatos {
        char nome[200];
        char numero[200];
        char email[200];
    };

void procuraNumero(struct registroDeContatos *listaContatos,char *nomes){
    int i;

    for ( i = 0; i < 3; i++) {
    if (strcmp(listaContatos[i].nome, nomes) == 00) {
    printf("\n\t-RESULTADO-\n");
    printf("Nome do contato: %s\n", listaContatos[i].nome);
    printf("Número: %s",listaContatos[i].numero);
    return;
        }   
    }
}

int main(){
    setlocale(LC_ALL, "portuguese");
    struct registroDeContatos listaContatos[3];

    int i;
    char nomes[200];
    

    for ( i = 0; i < 3; i++) {
    printf("Digite o nome para o contato: ");
    gets(listaContatos[i].nome);

    printf("Digite o número: ");
    gets(listaContatos[i].numero);

    printf("Digite o email: ");
    gets(listaContatos[i].email);
    }

    printf("\t-PROCURAR O CONTATO-\n\n");
    printf("Digite o nome do contato: ");
    gets(nomes);

    system("cls || clear");

    procuraNumero(listaContatos, nomes);
    
    return 0;
    
}