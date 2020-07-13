#include <stdio.h>
#include <stdlib.h>
#include "DeclaraFuncao.h"

int main()
{
    int n,opc,resp;

    do{
        printf("\n==========MENU==========\n");
        printf("1 - Analisar valor\n");
        printf("2 - Sair\n");
        printf("\nSelecione uma opcao: ");
        scanf("%d",&opc);
        switch(opc){
        case 1:
            printf("\nDigite o valor a ser selecionado: ");
            scanf("%d",&n);
            while(n<=0){
                printf("\nO valor deve ser maior que zero! Por favor digite novamente: ");
                scanf("%d",&n);
            }

            resp = FuncaoVerificaValor(n);
            printf("\nO valor %d e primo? %d\n\n",n,resp);
        }
    }while(opc!=2);
    return 0;
}
