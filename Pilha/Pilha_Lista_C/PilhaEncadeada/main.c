#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"

int main()
{
    int opc, v;
    float n,r;
    Pilha *p;
    Pilha *invertida;
    Pilha *aux;
    Elemento *vet;
    char resp = 'S';

    do{
        printf("\n========== MENU ==========\n");
        printf("1 - Criar uma Pilha\n");
        printf("2 - Verificar se a Pilha Esta Vazia\n");
        printf("3 - Empilhar Valores na Pilha\n");
        printf("4 - Desempilhar Valores na Pilha\n");
        printf("5 - Imprimir Pilha\n");
        printf("6 - Criar Pilha Invertida\n");
        printf("7 - Imprimir Pilha Invertida\n");
        printf("8 - Lierar Pilha\n");
        printf("9 - Lierar Pilha Invertida\n");
        printf("10 - Insere Valores na Pilha em Ordem Decrecente\n");
        printf("11 - Insere Valores na Pilha em Ordem Crescente\n");
        printf("12 - Sair\n");
        printf("\n\nSelecione uma opcao: ");
        scanf("%d",&opc);

        switch(opc){
        case 1:
            p = CriaPilha();
        break;

        case 2:
            v = VericaPilhaVazia(p);
            printf("\nA Pilha esta vazia? %d\n",v);
        break;

        case 3:
            printf("\nDigite um valor para empilhar na pilha: ");
            scanf("%f",&n);
            PilhaPush(p,n);
        break;

        case 4:
            r = PilhaPop(p);
            printf("\nValor desempilhado da pilha %.2f\n",r);
        break;

        case 5:
            ImprimePilha(p);
        break;

        case 6:
           invertida = CriaPilha();
           CriaPilhaInvertida(p,invertida);
        break;

        case 7:
            ImprimePilha(invertida);
        break;

        case 8:
            LiberaPilha(p);
        break;

        case 9:
            LiberaPilha(invertida);
        break;

        case 10:
            vet = CriaLista();
            aux = CriaPilha();

            while(resp == 'S' || resp == 's'){
                printf("\nDigite um valor a ser inserido na pilha: ");
                scanf("%f",&n);
                PilhaPush(aux,n);
                printf("Inseerir mais um valor na pilha? S/N ");
                scanf("%s",&resp);
            }

            while(!VericaPilhaVazia(aux)){
                n = PilhaPop(aux);
                vet = InsereOrdenadoCrescente(vet,n);
            }

            PushOrdenadoDecrescente(vet,p);
        break;

        case 11:
            vet = CriaLista();
            aux = CriaPilha();

            while(resp == 'S' || resp == 's'){
                printf("\nDigite um valor a ser inserido na pilha: ");
                scanf("%f",&n);
                PilhaPush(aux,n);
                printf("Inseerir mais um valor na pilha? S/N ");
                scanf("%s",&resp);
            }

            while(!VericaPilhaVazia(aux)){
                n = PilhaPop(aux);
                vet = InsereOrdenadoDecrescente(vet,n);
            }

            PushOrdenadoCrescente(vet,p);


        }

    }while(opc!=12);

    return 0;
}
