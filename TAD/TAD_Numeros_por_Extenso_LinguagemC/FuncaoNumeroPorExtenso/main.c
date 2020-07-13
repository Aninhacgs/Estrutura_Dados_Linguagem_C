#include <stdio.h>
#include <stdlib.h>
#include "DeclaraFuncao.h"

int main()
{
    int opc, valor;

    do{
        printf("\n==========MENU==========\n");
        printf("1 - Numero por extenso\n");
        printf("2 - Sair\n");

        printf("\nSelecione uma opcao: ");
        scanf("%d",&opc);

        switch(opc){
        case 1:
            printf("\nDigite um valor: ");
            scanf("%d",&valor);
            FuncaoNumeroPorExtenso(valor);
        break;
        }
    }while(opc!=2);

    return 0;
}
