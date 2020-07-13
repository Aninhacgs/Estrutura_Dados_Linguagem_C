#include"DeclaraFuncao.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void IniciaEstrutura(Aluno *a[],int n){
    int i;

    for(i=0;i<n;i++){
        a[i] = malloc(1 * sizeof(Aluno));
    }
}

void CadastroAluno(Aluno *a[], int n){
    int i;

    for(i=0;i<n;i++){
        printf("\nDigite o nome do aluno: ");
        fflush(stdin);
        gets(a[i]->nome);
        printf("\nDigite a matricula: ");
        fflush(stdin);
        scanf("%d",&a[i]->matricula);
        printf("\nDigite a disciplina: ");
        fflush(stdin);
        gets(a[i]->disciplina);
        printf("\nDigite a nota P1: ");
        fflush(stdin);
        scanf("%f",&a[i]->p1);
        printf("\nDigite a nota P2: ");
        fflush(stdin);
        scanf("%f",&a[i]->p2);
        printf("\nDigite a nota P3: ");
        fflush(stdin);
        scanf("%f",&a[i]->p3);

    }
}

void ImprimeCadastro(Aluno *a[], int n){
    int i;
    printf("\n==========CADASTRO DE ALUNOS==========\n");
    for(i=0;i<n;i++){
        printf("\n\nIndice(%d)",i);
        printf("\nAluno: %s",a[i]->nome);
        printf("\nMatricula: %d",a[i]->matricula);
        printf("\nDisiciplina: %s",a[i]->disciplina);
        printf("\nNota P1: %.2f",a[i]->p1);
        printf("\nNota P2: %.2f",a[i]->p2);
        printf("\nNota P3: %.2f",a[i]->p3);
        printf("\nMedia: %.2f",a[i]->media);
        printf("\nSituacao: %s",a[i]->situacao);

    }

    printf("\n\n");
}


void BuscaAluno(Aluno *a[], int n, int matricula){
    int i, cont = 0;
    printf("\n==========RESULTADO PARA BUSCA DA MATRICULA %d==========\n",matricula);
    for(i=0;i<n;i++){
        if(a[i]->matricula == matricula){
            printf("\nAluno: %s",a[i]->nome);
            printf("\nMatriculado na disciplina: %s",a[i]->disciplina);
            printf("\nNota P1: %.2f",a[i]->p1);
            printf("\nNota P2: %.2f",a[i]->p2);
            printf("\nNota P3: %.2f",a[i]->p3);
            printf("\nMedia: %.2f",a[i]->media);
            printf("\nSituacao: %s",a[i]->situacao);

            cont++;
        }
    }


    printf("\n\n\nForam localizados %d registros para a matricula %d\n",cont,matricula);
}


void CalculaMedia(Aluno *a[],int n){
    int i;
    char *sit;

    for(i=0;i<n;i++){
        if(a[i]->p1 > a[i]->p2 && a[i]->p2 > a[i]->p3){
            a[i]->media = (a[i]->p1 + a[i]->p2) / 2;
        }

        else if(a[i]->p2 > a[i]->p1 && a[i]->p3 > a[i]->p1){
            a[i]->media = (a[i]->p2 + a[i]->p3) / 2;
        }

        else if(a[i]->p3 > a[i]->p2 && a[i]->p1 > a[i]->p2){
            a[i]->media = (a[i]->p3 + a[i]->p1) / 2;
        }

        else if(a[i]->p1 < a[i]->p2 && a[i]->p2 == a[i]->p3){
            a[i]->media = (a[i]->p2 + a[i]->p3) / 2;
        }

        else if(a[i]->p2 < a[i]->p1 && a[i]->p1 == a[i]->p3){
            a[i]->media = (a[i]->p3 + a[i]->p1) / 2;
        }

        else if(a[i]->p3 < a[i]->p1 && a[i]->p1 == a[i]->p2){
            a[i]->media = (a[i]->p1 + a[i]->p2) / 2;
        }

        else if(a[i]->p1 == a[i]->p2 && a[i]->p2 == a[i]->p3){
            a[i]->media = (a[i]->p1 + a[i]->p2) / 2;
        }
    }

    for(i=0;i<n;i++){
        if(a[i]->media >= 6.0){
            strcpy(a[i]->situacao,"APROVADO");

        }
        else{
            strcpy(a[i]->situacao,"REPROVADO");
        }
    }
}
