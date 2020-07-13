#include <stdio.h>
#include <stdlib.h>
#include "DeclaraFuncoes.h"
int main()
{
    int opc,n,test,*x,p,y;
    char resp  = 'S';
    TipoLista *lista = (TipoLista*)malloc(sizeof(TipoLista));


    do{
        printf("\n==========MENU=========\n");
        printf("1 - Fazer lista vazia\n");
        printf("2 - Verificar se a lista esta vazia\n");
        printf("3 - Inserir elemento na lista\n");
        printf("4 - Imprimir lista\n");
        printf("5 - Remover elementos da lista\n");
        printf("6 - Imprime Lista Recursiva\n");
        printf("7 - Buscar um Elemento na Lista\n");
        printf("8 - Sair\n");
        printf("\n\nSelecione uma opcao: ");
        scanf("%d",&opc);

        switch(opc){
        case 1:
            FazListaVazia(lista);
        break;

        case 2:
            test = TestaListaVazia(lista);
            printf("\nA lista esta vazia? %d\n",test);
        break;

        case 3:
            while(resp == 'S' || resp == 's'){
                printf("Digite um valor para inserir na lista: ");
                scanf("%d",&n);
                InsereLista(n,lista);
                n = 0;
                printf("\nGostaria de digitar mais um valor na lista? S / N: ");
                scanf("%s",&resp);
            }
        break;

        case 4:
            ImprimeLista(lista);
        break;

        case 5:
            p = lista->primeiro;
            RemoveLista(p,lista,&x);
            printf("%i\n",x);
        break;

        case 6:
         ImprimeListaRecursiva(lista);
        break;

        case 7:
            printf("\nDigite um valor: ");
            scanf("%d",&n);
            y = BuscaElementoLista(lista,n);
            printf("\nO valor %d pertence a lista? %d\n",n,y);
        break;

        }

    }while(opc!=8);

    free(lista);
}
