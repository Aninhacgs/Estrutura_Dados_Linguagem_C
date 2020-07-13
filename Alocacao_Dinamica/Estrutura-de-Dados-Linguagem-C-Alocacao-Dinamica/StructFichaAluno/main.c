#include <stdio.h>
#include <stdlib.h>
#include<string.h>

void main(void)
{
    /*Criando a struct*/
    struct ficha_de_aluno{
        char nome[50];
        char disciplina[30];
        float nota_prova1;
        float nota_prova2;
        float nota_prova3;
        float media;
        char situacao[10];
    };

    /*Criando a variável do tipo ficha_de_aluno*/

    struct ficha_de_aluno aluno;

    /*Entrada dos dados*/

    printf("\n----------Cadastro de aluno----------\n\n\n");

    printf("Nome do aluno: ");
    fflush(stdin);
    fgets(aluno.nome,40,stdin);

    printf("Disciplina: ");
    fflush(stdin);
    fgets(aluno.disciplina,40,stdin);

    printf("Informe a nota da primeira prova: ");
    scanf("%f",&aluno.nota_prova1);

    printf("Informe a nota da segunda prova: ");
    scanf("%f",&aluno.nota_prova2);


    printf("Informe a nota da terceira prova: ");
    scanf("%f",&aluno.nota_prova3);

    /*Processamento da media*/

    if(aluno.nota_prova1 > aluno.nota_prova3 && aluno.nota_prova2 > aluno.nota_prova3){
        aluno.media = (aluno.nota_prova1 + aluno.nota_prova2) / 2;
    }


    else if(aluno.nota_prova1 > aluno.nota_prova2 && aluno.nota_prova3 > aluno.nota_prova2){
        aluno.media = (aluno.nota_prova1 + aluno.nota_prova3) / 2;
    }


    else if(aluno.nota_prova2 > aluno.nota_prova1 && aluno.nota_prova3 > aluno.nota_prova1){
        aluno.media = (aluno.nota_prova2 + aluno.nota_prova3) / 2;
    }


    /*Processamento da situção*/
    if(aluno.media >= 6){
        strcpy(aluno.situacao,"APROVADO");
    }

    else if(aluno.media < 6){
        strcpy(aluno.situacao,"REPROVADO");

    }


    /*Impressão dos dados*/

    printf("\n\n----------Lendo os dados da struct----------\n\n");

    printf("Nome: %s",aluno.nome);
    printf("Disciplina: %s",aluno.disciplina);
    printf("Nota da primeira prova: %.2f",aluno.nota_prova1);
    printf("\nNota da segunda prova: %.2f",aluno.nota_prova2);
    printf("\nNota da terceira prova: %.2f",aluno.nota_prova3);
    printf("\nMedia: %.2f",aluno.media);
    printf("\nSistuacao: %s",aluno.situacao);

}
