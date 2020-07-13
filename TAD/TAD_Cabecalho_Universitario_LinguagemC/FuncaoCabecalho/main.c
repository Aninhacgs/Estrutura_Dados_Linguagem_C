#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "DeclaraFuncao.h"
int main()
{
    char *inst, *uni, *dis,*nome;
    int opc;

    inst = (char*) malloc(150 * sizeof(char));
    uni = (char*) malloc(150 * sizeof(char));
    dis = (char*) malloc(150 * sizeof(char));
    nome = (char*) malloc(150 * sizeof(char));;

    do{
        printf("\n==========MENU==========\n");
        printf("1 - Informar dados do cabecalho\n");
        printf("2 - Sair\n");

        printf("\nDigite uma opcao: ");
        scanf("%d",&opc);

        switch(opc){
        case 1:
            printf("Digite o nome da instituicao: ");
            fflush(stdin);
            gets(inst);
            printf("Digite o nome da unidade: ");
            fflush(stdin);
            gets(uni);
            printf("Digite a disciplina: ");
            fflush(stdin);
            gets(dis);
            printf("Digite o nome do aluno: ");
            fflush(stdin);
            gets(nome);
            FuncaoCabecalho(inst,uni,dis,nome);
            free(inst);
            free(uni);
            free(dis);
            free(nome);
        break;
        }
    }while(opc!=2);


}
