#include "DeclaraFuncoes.h"
#include <stdio.h>
#include <stdlib.h>

void FazListaVazia(TipoLista *lista){
    lista->primeiro = -1;
    lista->ultimo = lista->primeiro;
}

int TestaListaVazia(TipoLista *lista){
    int resp;
    if((lista->primeiro == -1)&&(lista->ultimo==-1)){
        resp = 1;
    }

    else{
        resp = 0;
    }

    return resp;
}

void InsereLista(float x, TipoLista *lista){
    if(lista->ultimo == TAM -1){
        printf("\nErro: Lista Cheia!\n");
    }

    else{
        lista->ultimo++;
        lista->valores[lista->ultimo] = x;
        if(lista->primeiro == -1){
            lista->primeiro = 0;
        }
    }
}

void ImprimeLista(TipoLista *lista){
    int aux;
    if(TestaListaVazia(lista)){
        printf("\nErro: Lista vazia!\n");
    }
    else{
       printf("\n========== VALORES DA LISTA ==========\n");
       for(aux=lista->primeiro;aux<=lista->ultimo;aux++){
          printf("Indice(%d) -> %.2f\n",aux,lista->valores[aux]);
    }
    }


    printf("\n\n");
}


int BuscaLista(float x, TipoLista *lista){
    int res = 0,aux;

    for(aux=lista->primeiro;aux<=lista->ultimo;aux++){
        if(lista->valores[aux] == x){
            res = 1;
        }
    }

    return res;
}
