#include <stdio.h>
#include <stdlib.h>
#include "ListaEncadeada.h"

int main()
{
    Elemento *lista;
    int n,valor,opc;

    do{
        printf("\n========== MENU ==========\n");
        printf("1 - Cria Lista\n");
        printf("2 - Verifica se a Lista Esta Vazia\n");
        printf("3 - Insere Valor na Lista\n");
        printf("4 - Imprime Lista\n");
        printf("5 - Buscar Valor na Lista\n");
        printf("6 - Retirar Valor da Lista\n");
        printf("7 - Inserir Valores Ordenados na Lista\n");
        printf("8 - Igualdade de Listas\n");
        printf("9 - Liberar Lista\n");
        printf("10 - Sair\n");

        printf("\n\nSelecione uma opcao: ");
        scanf("%d",&opc);

        switch(opc){
        case 1:
            lista = lst_cria();
        break;

        case 2:
             n = lst_vazia(lista);
             printf("\nA lista esta vazia? %d\n",n);
        break;

        case 3:
            printf("\nDigite um valor para ser inserido na lista: ");
            scanf("%d",&valor);
            lista = lst_insere(lista,valor);
        break;

        case 4:
            lst_imprime(lista);
        break;

        case 5:
            printf("\nDigite o valor a ser buscado na lista: ");
            scanf("%d",&valor);
            lista = busca(lista,valor);
        break;

        case 6:
            printf("\nDigite o valor a ser retirado da lista: ");
            scanf("%d",&valor);
            lista = lst_retira(lista,valor);
        break;

        case 7:
            printf("\nDigite um valor para ser inserido na lista: ");
            scanf("%d",&valor);
            lista = lst_ordenado(lista,valor);
        break;

        case 9:
            lst_libera(lista);
        break;
        }
    }while(opc!=10);


    return 0;
}
