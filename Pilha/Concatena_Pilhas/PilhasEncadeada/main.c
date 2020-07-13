#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"

int main()
{
    int opc,n,v;
    Pilha *p;
    Pilha *p2;

    do{
        printf("\n========== MENU ==========\n");
        printf("1 - Criar Pilha\n");
        printf("2 - Verificar se a Pilha Esta Vazia\n");
        printf("3 - Inserir Valores na Pilha\n");
        printf("4 - Imprimir Pilha\n");
        printf("5 - Criar uma Segunda Pilha\n");
        printf("6 - Inserir Valores na Segunda Pilha\n");
        printf("7 - Concatenar Duas Pilhas\n");
        printf("8 - Sair\n");
        printf("\n\nSelecione uma opcao: ");
        scanf("%d",&opc);

        switch(opc){
        case 1:
            p = CriaPilha();
        break;

        case 2:
            v = VerificaPilhaVazia(p);
            printf("\nA pilha esta vazia? %d\n",v);
        break;

        case 3:
            printf("\nDigite um valor para inserir na pilha: ");
            scanf("%d",&n);
            PilhaPush(p,n);
        break;

        case 4:
            ImprimePilha(p);
        break;

        case 5:
            p2 = CriaPilha();
        break;

        case 6:
            printf("\nDigite um valor para inserir na pilha: ");
            scanf("%d",&n);
            PilhaPush(p2,n);
        break;

        case 7:
            ConcatenaPilhas(p,p2);
        break;

        }
    }while(opc!=8);
    return 0;
}
