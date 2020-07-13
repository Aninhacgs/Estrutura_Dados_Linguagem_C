#include <stdio.h>
#include <stdlib.h>
#include "DeclaraFuncao.h"
void main(void)
{
    int opc, n1,n2,maior;

    do{
        printf("\n==========MENU==========\n");
        printf("1 - Calcular o maior valor\n");
        printf("2 - Sair\n");
        printf("\nDigite uma opcao: ");
        scanf("%i",&opc);

        switch(opc){
        case 1:
            printf("\nDigite o primeiro valor: ");
            scanf("%i",&n1);
            printf("\nDigite o segundo valor: ");
            scanf("%i",&n2);
            while(n2<n1){
                printf("\nO segundo valor deve ser maior que o valor %d! Por favor digite novamente: ",n1);
                scanf("%i",&n2);
            }

            maior = FuncaoMaiorValor(n1,n2);
            printf("\nO maior valor do intervalor %d ate %d -> %d\n",n1,n2,maior);

        }
    }while(opc!=2);
}
