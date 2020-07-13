#include "DeclaraFuncoes.h"
#include <stdio.h>
#include <stdlib.h>

void FazListaVazia(TipoLista *lista){
    lista ->primeiro = -1;
    lista ->ultimo = lista ->primeiro;
}

int TestaListaVazia(TipoLista *lista){
    int resp;
    if ((lista->primeiro == -1) && (lista->ultimo == -1)){
        resp = 1;
    }
    else{
        resp = 0;
    }

    return resp;
}

void InsereLista(int x, TipoLista *lista){
    if(lista->ultimo == TAM -1){
        printf("Erro: Lista cheia!\n");
    }
    else{
        lista->ultimo++;
        lista->itens[lista->ultimo] = x;
        if(lista->primeiro == -1){
            lista->primeiro = 0;
        }
    }
}

void ImprimeListaRecursiva(TipoLista *lista){
    int aux;

    if(TestaListaVazia(lista)){
        printf("Erro: Lista Vazia!\n");
    }

    else{
        printf("\n\nValores da lista:\n");
        for(aux = lista ->ultimo; aux >= lista->primeiro;aux--){
            printf("%i ",lista->itens[aux]);
        }

        printf("\n\n");
    }
}


void ImprimeLista(TipoLista *lista){
    int aux;

    if(TestaListaVazia(lista)){
        printf("Erro: Lista Vazia!\n");
    }

    else{
        printf("\n\nValores da lista:\n");
        for(aux = lista ->primeiro; aux <= lista->ultimo;aux++){
            printf("%i ",lista->itens[aux]);
        }

        printf("\n\n");
    }
}


void RemoveLista(int p, TipoLista *lista, int *x){
    char resp = 'S';
    int aux;

    if(TestaListaVazia(lista)){
        printf("Erro: Lista Vazia!\n");
    }

    else if((p < lista->primeiro) || (p > lista->ultimo)){
        printf("Erro: Posicao inexistente!\n");
    }

    else{
        while(resp == 'S' || resp == 's'){
        *x = lista->itens[p];
        printf("\nO Valor %d foi removido da lista",lista->itens[lista->primeiro]);
        for(aux = p; aux < lista->ultimo;aux++){
            lista->itens[aux] = lista->itens[aux + 1];
        }

        lista->ultimo--;

        if(lista->ultimo == -1){
            lista ->primeiro = -1;
        }
        if(TestaListaVazia(lista)){
            printf("\n\nNao ha mais valores para serem removidos! Digite n ou N para finalizar: ");
        }
        else{
            printf("\n\nGostaria de remover o valor %d da lista? S / N: ",lista->itens[lista->primeiro]);
        }

        scanf("%s",&resp);
    }

    }

}


int BuscaElementoLista(TipoLista *lista, int x){
    int aux, resp=0;

    for(aux = lista ->primeiro; aux <= lista->ultimo;aux++){
            if(x == lista->itens[aux]){
                resp = 1;
            }
        }

    return resp;
}
