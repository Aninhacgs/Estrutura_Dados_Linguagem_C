#include <stdio.h>
#include <stdlib.h>
#include "DeclaraFuncao.h"
int main()
{
    int dia,opc;

    do{
        printf("\n==========MENU==========\n");
        printf("1 - Selecionar dia da semana\n");
        printf("2 - Sair\n");
        printf("\nSelecione uma opcao: ");
        scanf("%d",&opc);
        switch(opc){
        case 1:
            printf("\nDigite um valor referente ao dia da semana: ");
            scanf("%d",&dia);
            DiasSemana(dia);
        break;
        }

    }while(opc!=2);


    return 0;
}
