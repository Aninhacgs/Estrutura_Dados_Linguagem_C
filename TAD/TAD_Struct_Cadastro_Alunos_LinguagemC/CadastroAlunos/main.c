#include <stdio.h>
#include <stdlib.h>
#include "DeclaraFuncao.h"

void main(void)
{
    Aluno *p[100];
    int opc,n,matr;

    do{
        printf("\n===========MENU==========\n");
        printf("1 - Iniciar Cadastro\n");
        printf("2 - Cadastrar Aluno\n");
        printf("3 - Calcular Media\n");
        printf("4 - Imprimir Cadastro\n");
        printf("5 - Consultar Dados do Aluno\n");
        printf("6 - Liberar Regitro de Alunos\n");
        printf("7 - Sair\n");
        printf("\nSelecione uma opcao: ");
        scanf("%d",&opc);

        switch(opc){
        case 1:
            printf("\nDigite a quantidade de alunos: ");
            scanf("%d",&n);
            while(n<=0){
                printf("A quantidade de alunos deve ser maior que zero! Por favor digite novamente: ");
                scanf("%d",&n);
            }

            IniciaEstrutura(p,n);
        break;

        case 2:
            CadastroAluno(&p,n);
        break;

        case 3:
            CalculaMedia(p,n);
        break;

        case 4:
           ImprimeCadastro(p,n);
        break;

        case 5:
             printf("\nDigite o numero da matricula para buscar: ");
            scanf("%d",&matr);
            while(matr<=0){
                printf("\nMatricula invalida! Por favor digite novamente! ");
                scanf("%d",&matr);
            }

            BuscaAluno(p,n,matr);
        break;

        case 6:
            free(p);

        }
    }while(opc!=7);

}
