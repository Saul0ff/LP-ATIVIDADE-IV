#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct dados_funcionarios
{
    char nome[200];
    char cargo[200];
    float salario;
};

int i, j, imax = 3, jmax =3;

float mediaSalarioPorCargo(struct dados_funcionarios *funcionario){
    float soma = 0;

    for ( i = 0; i < imax; i++) {
            soma += funcionario[i].salario;
    }
    return soma / jmax;
    soma = 0;
}

float mediaSalarioProgramador(struct dados_funcionarios *funcionario, char cargoProgramador){
    float soma;
    int contador = 0;
        for ( i = 0; i < imax; i++) {
        if (strcmp(funcionario[i].cargo, cargoProgramador) == 0) {
            soma += funcionario[i].salario;
            contador++;
        }            
    }
        return soma / contador;
}

int main(){
    setlocale(LC_ALL, "portuguese");

    struct dados_funcionarios funcionario[2];

    char cargoProgramador[] = "programador";
    float mediaProgramador;

    for ( i = 0; i < 2; i++) {
        printf("Digite o nome do cargo: ");
        gets(funcionario[i].cargo);

        printf("%dª funcionário: ", j + 1);
        gets(funcionario[i].nome);

        printf("Digite qual é o salário: ");
        scanf("%f", &funcionario[i].salario);

        fflush(stdin);

        }
    
    mediaProgramador = mediaSalarioProgramador(funcionario, cargoProgramador);

    printf("Média salario programadores: %.2f\n", mediaProgramador);
}

