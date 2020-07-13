#include <stdio.h>
#include <stdlib.h>
#include "Listas.h"

int main()
{
    int opc,v;
    float n;
    char resp = 'S';
    Lista *p;
    Lista *q;
    Lista *c;

    do{
        printf("\n==================== MENU ===================\n");
        printf("1 - Criar Listas\n");
        printf("2 - Verificar se a Primeira Lista Esta Vazia\n");
        printf("3 - Verificar se a segunda Lista Esta Vazia\n");
        printf("4 - Inserir Valor na Primeira Lista\n");
        printf("5 - Inserir Valor na Segunda Lista\n");
        printf("6 - Imprimir Listas\n");
        printf("7 - Concatenar Listas\n");
        printf("8 - Imprimir Lista Concatenada\n");
        printf("9 - Buscar Valor na Primeira Lista\n");
        printf("10 - Buscar Valor na Segunda Lista\n");
        printf("11 - Dividir Primeira Lista\n");
        printf("12 - Imprimir Divisao da Primeira Lista\n");
        printf("13 - Dividir Segunda Lista\n");
        printf("14 - Imprimir Divisao da Segunda Lista\n");
        printf("15 - Verificar a Igualdade das Listas\n");
        printf("16 - Inserir Valores Ordenados na Forma Crescente na Primeira Lista\n");
        printf("17 - Imprimir Primeira Lista Ordenada Crescente\n");
        printf("18 - Inserir Valores Ordenados na Forma Crescente na Segunda Lista\n");
        printf("19 - Imprimir Segunda Lista Ordenada Crescente\n");
        printf("20 - Inserir Valores Ordenados na Forma Decrescente na Primeira Lista\n");
        printf("21 - Imprimir Primeira Lista Ordenada Decrescente\n");
        printf("22 - Inserir Valores Ordenados na Forma Decrescente na Segunda Lista\n");
        printf("23 - Imprimir Segunda Lista Ordenada Decrescente\n");
        printf("24 - Remover Valores da Primeira Lista\n");
        printf("25 - Remover Valores da Segunda Lista\n");
        printf("26 - Liberar Listas\n");
        printf("27 - Sair\n");
        printf("\n\nSelecione uma opcao: ");
        scanf("%d",&opc);

        switch(opc){
        case 1:
            p = criaLista();
            q = criaLista();
        break;

        case 2:
           v = VerificaLista(p);
           printf("\nA primeira lista esta vazia? %d\n\n",v);
        break;

        case 3:
           v = VerificaLista(q);
           printf("\nA segunda lista esta vazia? %d\n\n",v);
        break;

        case 4:
            printf("\nDigite o valor para inserir na lista: ");
            scanf("%f",&n);
            p = InsereValor(p,n);
        break;

        case 5:
            printf("\nDigite o valor para inserir na lista: ");
            scanf("%f",&n);
            q = InsereValor(q,n);
        break;

        case 6:
            printf("\n\nLISTA 1\n");
            ImprimeLista(p);
            printf("LISTA 2\n");
            ImprimeLista(q);
        break;

        case 7:
           c = criaLista();
           c = Concatena(p,q);
        break;

        case 8:
            ImprimeLista(c);
        break;

        case 9:
            printf("\nDigite o valor para buscar na primeira lista: ");
            scanf("%f",&n);
            v = BuscaValor(p,n);
            printf("\nO valor %.2f pertence a primeira lista? %d\n",n,v);
        break;

        case 10:
            printf("\nDigite o valor para buscar na segunda lista: ");
            scanf("%f",&n);
            v = BuscaValor(q,n);
            printf("\nO valor %.2f pertence a segunda lista? %d\n",n,v);
        break;

        case 11:
            c = criaLista();
            printf("\nDigite o valor para dividir a primeira lista: ");
            scanf("%f",&n);
            v = BuscaValor(p,n);
            if(v == 0){
                printf("Não foi possivel dividir a lista, pois o valor %.2f nao pertence a lista!\n",n);
            }
            else if(v == 1){
                c = DividiLista(p,n);
            }

        break;

        case 12:
            printf("\n\n DIVISAO DA LISTA 1\n");
            ImprimeLista(p);
            ImprimeLista(c);
        break;

        case 13:
            c = criaLista();
            printf("\nDigite o valor para dividir a segunda lista: ");
            scanf("%f",&n);
            v = BuscaValor(q,n);
            if(v == 0){
                printf("Não foi possivel dividir a lista, pois o valor %.2f nao pertence a lista!\n",n);
            }
            else if(v == 1){
                c = DividiLista(q,n);
            }

        break;

        case 14:
            printf("\n\n DIVISAO DA LISTA 2\n");
            ImprimeLista(q);
            ImprimeLista(c);
        break;


        case 15:
            v = IgualdadeListas(p,q);
            printf("\nAs listas sao iguais? %d\n",v);
        break;

        case 16:
            v = VerificaLista(p);
            if(v == 0){
                printf("\nNao sera possivel inserir valores ordenados na lista, pois a lista ja possui valores!\n");
            }
            else if(v == 1){
                while(resp == 'S' || resp == 's'){
                    printf("Digite o valor a ser inserido: ");
                    scanf("%f",&n);
                    p = InsereOrdenado(p,n);
                    printf("\nGostaria de inserir mais um valor na lista? S/N ");
                    scanf("%s",&resp);
                }
            }

        break;

        case 17:
            printf("\nLISTA 1 ORDENADA NA FORMA CRESCENTE\n");
            ImprimeLista(p);
        break;

        case 18:
            v = VerificaLista(q);
            if(v == 0){
                printf("\nNao sera possivel inserir valores ordenados na lista, pois a lista ja possui valores!\n");
            }
            else if(v == 1){
                while(resp == 'S' || resp == 's'){
                    printf("Digite o valor a ser inserido: ");
                    scanf("%f",&n);
                    q = InsereOrdenado(q,n);
                    printf("\nGostaria de inserir mais um valor na lista? S/N ");
                    scanf("%s",&resp);
                }
            }

        break;

        case 19:
            printf("\nLISTA 2 ORDENADA NA FORMA CRESCENTE\n");
            ImprimeLista(q);
        break;

        case 20:
            v = VerificaLista(p);
            if(v == 0){
                printf("\nNao sera possivel inserir valores ordenados na lista, pois a lista ja possui valores!\n");
            }
            else if(v == 1){
                while(resp == 'S' || resp == 's'){
                    printf("Digite o valor a ser inserido: ");
                    scanf("%f",&n);
                    p = InsereOrdenadoDecrecente(p,n);
                    printf("\nGostaria de inserir mais um valor na lista? S/N ");
                    scanf("%s",&resp);
                }
            }

        break;

        case 21:
            printf("\nLISTA 1 ORDENADA NA FORMA DECRESCENTE\n");
            ImprimeLista(p);
        break;

        case 22:
            v = VerificaLista(p);
            if(v == 0){
                printf("\nNao sera possivel inserir valores ordenados na lista, pois a lista ja possui valores!\n");
            }
            else if(v == 1){
                while(resp == 'S' || resp == 's'){
                    printf("Digite o valor a ser inserido: ");
                    scanf("%f",&n);
                    p = InsereOrdenadoDecrecente(p,n);
                    printf("\nGostaria de inserir mais um valor na lista? S/N ");
                    scanf("%s",&resp);
                }
            }

        break;

        case 23:
            printf("\nLISTA 1 ORDENADA NA FORMA DECRESCENTE\n");
            ImprimeLista(p);
        break;

        case 24:
            printf("\nDigite o elemento para remove-lo da primeira lista: ");
            scanf("%f",&n);
            v = BuscaValor(p,n);
            if(v == 0){
                printf("\nNao foi possivel remover o valor %.2f, pois este nao pertence a primeira lista!\n",n);
            }
            else if(v == 1){
                p = RemoveValor(p,n);
                printf("\nO valor %.2f foi removido com sucesso!\n",n);
            }

        break;

        case 25:
            printf("\nDigite o elemento para remove-lo da segunda lista: ");
            scanf("%f",&n);
            v = BuscaValor(q,n);
            if(v == 0){
                printf("\nNao foi possivel remover o valor %.2f, pois este nao pertence a segunda lista!\n",n);
            }
            else if(v == 1){
                q = RemoveValor(q,n);
                printf("\nO valor %.2f foi removido com sucesso!\n",n);
            }

        break;

        case 26:
            LiberarLista(p);
            LiberarLista(q);
            LiberarLista(c);
        break;


        }

    }while(opc!=27);

    return 0;
}
