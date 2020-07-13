#include <stdio.h>
#include <stdlib.h>
#include "DeclaraFuncao.h"

void main(void)
{
    int opc,n;
    Produto *v[100];

    do{
        printf("\n==========MENU==========\n");
        printf("1 - Iniciar estrutura\n");
        printf("2 - Cadastrar Produtos\n");
        printf("3 - Imprimir cadastro de produtos\n");
        printf("4 - Liberar cadastro\n");
        printf("\n\nDigite uma opcao: ");
        scanf("%d",&opc);

        switch(opc){
        case 1:
            printf("\nDigite a quantidade de produtos: ");
            scanf("%d",&n);
            IniciarEstrutura(v,n);
        break;

        case 2:
            CadastroProdutos(&v,n);
        break;

        case 3:
            ImprimirProdutos(v,n);
        break;

        case 4:
            free(v);

        }
    }while(opc!=5);
}
