#include <stdio.h>
#include <stdlib.h>

struct registro_alunos
{
    char nomes[200];
    char dataNascimento[200];
    float notas[2];
    float media;
};

float calcularMedia(struct registro_alunos *alunos){
    float soma = 0;
    int i, j;
    for ( i = i; i < 3; i++) {
        for ( j = 0; j < 2; j++) {
            soma += alunos[i].notas[j];
        }
        alunos[i].media = soma / j;
        soma = 0;
    }
    
    for (size_t i = 0; i < 3; i++) {
        printf("%dª aluno: %s", i + 1, alunos[i].nomes);
        printf("Data Nascimento: %s", alunos[i].dataNascimento);
        for ( j = 0; j < 2; j++) {
            printf("%dª nota: %.1f", j + 1, alunos[i].notas[j]);
        }
        printf("Média: %.1f")
    }
    
}

int main(){
    struct registro_alunos alunos[3];
    int i, j;
    
    for ( i = 0; i < 3; i++) {
        printf("Digite o nome do %dª aluno: ", i + 1);
        gets(alunos[i].nomes);

        printf("Digite a data de nascimento: ");
        gets(alunos[i].dataNascimento);

        for ( j = 0; j < 2; j++) {
            printf("Digite %dª nota: ", j + 1);
            scanf("%f", alunos[i].notas[j]);
        }    
    }
    


}