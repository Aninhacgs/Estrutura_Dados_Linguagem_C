#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opc,n,resp;

    do{
        printf("\n==========MENU==========\n");
        printf("1 - Calcular fatorial\n");
        printf("2 - Sair\n");
        printf("\nSelecione uma opcao: ");
        scanf("%i",&opc);

        switch(opc){
        case 1:
            printf("\nDigite o valor: ");
            scanf("%i",&n);
            while(n<=0){
                printf("O valor deve ser maior que zero!Por favor tente novamente: ");
                scanf("%i",&n);
            }

            resp = FuncaoFatorial(n);
            printf("\nO fatorial do valor %i -> %i\n",n,resp);
        }
    }while(opc!=2);

}
