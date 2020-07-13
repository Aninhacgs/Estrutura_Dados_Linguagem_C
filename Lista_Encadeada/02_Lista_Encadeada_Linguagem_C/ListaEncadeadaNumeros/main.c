#include <stdio.h>
#include <stdlib.h>
#include "DeclaraFuncoes.h"

void main(void)
{
   int opc,res;
   float n;
   char resp='S';
   TipoLista *lista = (TipoLista*) malloc(sizeof(TipoLista));

   do{
    printf("\n========== MENU ==========\n");
    printf("1 - Criar Lista Vazia\n");
    printf("2 - Verificar se a Lista Esta Vazia\n");
    printf("3 - Inserir Valores na Lista\n");
    printf("4 - Buscar Valores na Lista\n");
    printf("5 - Imprimir Lista\n");
    printf("6 - Liberar Lista\n");
    printf("7 - Sair\n");
    printf("\n\nSelecione uma das opcoes: ");
    scanf("%d",&opc);

    switch(opc){
    case 1:
        FazListaVazia(lista);
    break;

    case 2:
        res = TestaListaVazia(lista);
        printf("\nA lista esta vazia? %d\n\n",res);
    break;

    case 3:
        while(resp == 'S' || resp == 's'){
            printf("\nDigite um valor para inserir na lista: ");
            scanf("%f",&n);
            InsereLista(n,lista);
            n = 0.0;
            printf("\nDeseja inserir mais um valor na lista? S/N ");
            scanf("%s",&resp);
        }

    break;

    case 4:
        printf("\nDigite o valor para busca na lista: ");
        scanf("%f",&n);
        res = BuscaLista(n,lista);
        printf("\nO valor %.2f pertence a lista? %d\n\n",n,res);
    break;

    case 5:
        ImprimeLista(lista);
    break;

    case 6:
        free(lista);
    break;
    }
   }while(opc!=7);
}
