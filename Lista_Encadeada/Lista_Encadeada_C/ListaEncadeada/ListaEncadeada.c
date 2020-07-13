#include "ListaEncadeada.h"
#include <stdio.h>
#include <stdlib.h>

Elemento* lst_cria(void){
    return NULL;
}

Elemento* lst_insere(Elemento* lst, int val){
    Elemento *novo;
    novo = (Elemento*) malloc(sizeof(Elemento));
    novo->info = val;
    novo->prox = lst;
    return novo;
}

void lst_imprime(Elemento* lst){
    Elemento *p;
    for(p=lst;p!=NULL;p=p->prox){
        printf("Info = %d\n",p->info);
    }
}

int lst_vazia(Elemento* lst){
    return(lst == NULL);
}


Elemento* busca(Elemento* lst, int v){
    Elemento *p;
    for(p=lst;p!=NULL;p=p->prox){
        if(p->info == v){
            return p;
        }
    }

    return NULL;
}


Elemento* lst_retira(Elemento* lst, int val){
    //Ponteiro para elemento anterior
    Elemento *ant = NULL;
    //Ponteiro para percorrer lista
    Elemento *p = lst;
    //Ponteiro para atualizar lista
    Elemento *rslt = lst;

    //Procurando o elemento na lista e guardando o anterior
    while(p!=NULL && p->info!=val){
        ant = p;
        p=p->prox;
    }

    //Verifica se achou o elemento
    if(p==NULL){
        //Não achou o elemento, retorna lista original
        return rslt;
    }

    if(ant == NULL){
        //Retira o elemento do inicio
        rslt = p->prox;
    }

    else{
        //Retira do meio da lista
        ant->prox = p->prox;
    }

    free(p);
    return rslt;
}



Elemento* lst_ordenado(Elemento* lst, int val){
    Elemento *novo;
    //Ponteiro para elemento anterior
    Elemento *ant = NULL;
    //Ponteiro para percorrer lista
    Elemento *p = lst;
    //Ponteiro para lista atualizada
    Elemento *rlst = lst;

    //Procurando posição de inserção
    while(p!=NULL && p->info < val){
        ant = p;
        p->prox;
    }

    //Cria elemento
    novo = (Elemento*)malloc(sizeof(Elemento));
    novo->info = val;

    //Encadeia elemento
    if(ant == NULL){
        //Insre valor no inicio
        novo->prox = lst;
        rlst = novo;
    }

    else{
        //Insere valor no meio da lista
        novo->prox = ant->prox;
        ant->prox = novo;
    }

    return rlst;
}


void lst_libera(Elemento* lst){
    Elemento *p;
    Elemento *t;

    p = lst;

    while(p!=NULL){
        //Guardando a referencia para o próximo elemento
        t = p->prox;
        //Libera a memoria apontada por p
        free(p);
        //Faz apontar para o próximo
        p=t;
    }
}
