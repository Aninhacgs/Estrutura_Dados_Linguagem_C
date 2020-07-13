#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"

int main()
{
    int opc, v,cont;
    float n;
    Lista* p;

    do{
        printf("\n========== MENU =========\n");
        printf("1 - Criar Lista\n");
        printf("2 - Verificar se a Lista Esta Vazia\n");
        printf("3 - Inserir Valores na Lista\n");
        printf("4 - Imprimir Lista\n");
        printf("5 - Buscar Valor na Lista\n");
        printf("6 - Remover um Valor da Lista\n");
        printf("7 - Remover um Conjunto de Valores da Lista\n");
        printf("8 - Liberar Lista\n");
        printf("9 - Sair\n");
        printf("\nSelecione uma opcao: ");
        scanf("%d",&opc);

        switch(opc){
        case 1:
            p = CriaLista();
        break;

        case 2:
            v = VerificaListaVazia(p);
            printf("\nA lista esta vazia? %d\n",v);
        break;

        case 3:
            printf("\nDigite um valor para inserir na lista: ");
            scanf("%f",&n);
            p = InsereValor(p,n);
        break;

        case 4:
            cont = ComprimentoLista(p);
            ImprimeLista(p);
            printf("\n\nA lista contem %d de valores inseridos.\n",cont);
        break;

        case 5:
            printf("\nDigite o valor a ser buscado na lista: ");
            scanf("%f",&n);
            v = BuscaValor(p,n);
            printf("\nO valor %.2f pertence a lista? %d\n",n,v);
        break;

        case 6:
            printf("\nDigite o valor para remove-lo da lista: ");
            scanf("%f",&n);
            v = BuscaValor(p,n);
            if(v == 0){
                printf("\nO valor %.2f nao pode ser removido, pois este nao pertence a lista!\n",n);
            }

            else if(v == 1){
                p = RemoveValor(p,n);
                printf("\nO valor %.2f foi removido com sucesso!\n",n);
            }
        break;

        case 7:
            printf("\nDigite a quantidade de valores a serem removidos: ");
            scanf("%d",&v);
            while(v == 0 || v<0 || v>n){
                printf("\nValor incorreto! Tente novamente: ");
                scanf("%d",&v);
            }

            p = RetiraPrefixo(p,v);
       break;

        case 8:
            LiberaLista(p);
        break;

        }
    }while(opc!=9);

    return 0;
}
