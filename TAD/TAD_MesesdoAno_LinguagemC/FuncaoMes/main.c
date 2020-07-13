#include <stdio.h>
#include <stdlib.h>
#include "DeclaraFuncao.h"

int main (void){
     int opc, mes;

     do{
        printf("\n\n==========MENU==========\n\n");
        printf("1 - Verifica mes\n");
        printf("0 - Sair\n\n");

        printf("\nDigite uma opcao: ");
        scanf("%d",&opc);

        switch(opc){
        case 1:
            printf("\nDigite um valor referente ao mes: ");
            scanf("%d",&mes);
            FuncaoMes(mes);
        }

     }while(opc!=0);

     return 0;
 }
