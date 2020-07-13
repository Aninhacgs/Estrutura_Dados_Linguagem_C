#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"

int main()
{
    int v,n,opc;
    Elemento* p;
    Elemento* q;

    do{
        printf("\n========== MENU ==========\n");
        printf("1 - Criar Lista\n");
        printf("2 - Verificar se Lista Esta Vazia\n");
        printf("3 - Inserir Valores na Lista\n");
        printf("4 - Imprimir Inverso e Não Inverso da Lista\n");
        printf("5 - Remover um Valor da Lista\n");
        printf("6 - Imprimir Lista no Sentido Inverso\n");
        printf("7 - Imprimir Lista no Sentido Ultimo valor ate o Primeiro Valor\n");
        printf("8 - Buscar Ultimo Valor da Lista\n");
        printf("9 - Liberar Lista\n");
        printf("10 - Sair\n");
        printf("\n\nSelecione uma opcao: ");
        scanf("%d",&opc);

        switch(opc){
        case 1:
            p = lst_criaLista();
        break;

        case 2:
            v = lst_verificaListaVazia(p);
            printf("\n\nA lista esta vazia? %d\n",v);
        break;

        case 3:
            printf("\nDigite o valor para inserir na lista: ");
            scanf("%d",&n);
            p = lst_insere(p,n);
        break;

        case 4:
            imprime_lista(p);
            imprime_inverso(p);
        break;

        case 5:
            printf("\n\nDigite o valor para remove-lo da lista: ");
            scanf("%d",&n);
            p = lst_retira(p,n);
        break;

        case 6:
            imprime_inverso(p);
        break;

        case 7:
            imprime_lista(p);
        break;

        case 8:
            q = busca_ultimo(p);
            printf("\nO ultimo valor da lista -> %d\n",q->info);
        break;

        case 9:
            p = libera_lista(p);
        break;

        }
    }while(opc!=10);


    return 0;
}
