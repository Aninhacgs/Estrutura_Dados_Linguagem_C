#include "DeclaraFuncao.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void FuncaoCabecalho(char *instituicao, char *unidade,char *discplina, char *nome){
    system("cls");
    printf("============================================================\n");
    printf("%s\n",instituicao);
    printf("Unidade: %s\n",unidade);
    printf("Disciplina: %s\n",discplina);
    printf("Aluno: %s\n",nome);
    printf("============================================================\n");
}
