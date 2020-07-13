#include <stdio.h>
#include <stdlib.h>
#include "DeclaraFuncao.h"
int main()
{
    int opc, n1,n2, resp;

    do{
        printf("\n==========MENU=========\n");
        printf("1 - Analisar divisor\n");
        printf("2 - Sair\n");
        printf("\nSelecione uma opcao: ");
        scanf("%d",&opc);

        switch(opc){
        case 1:
            printf("\nDigite o valor do numerador: ");
            scanf("%d",&n1);
            while(n1<=0){
                printf("\nO valor referente ao numerador deve ser maior que zero! Por favor digite nocamente: ");
                scanf("%d",&n1);
            }

            printf("\nDigite o valor do denominador: ");
            scanf("%d",&n2);
            while(n2<=0){
                printf("\nO valor referente ao denominador deve ser maior que zero! Por favor digite nocamente: ");
                scanf("%d",&n2);
            }

            resp = FuncaoVerificaDivisor(n1,n2);

            printf("\nO valor %d e divisivel por %d? %d\n",n1,n2,resp);
        }
    }while(opc!=2);
}
