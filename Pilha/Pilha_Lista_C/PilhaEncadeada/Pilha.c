#include "Pilha.h"
#include <stdio.h>
#include <stdlib.h>

//Funções para Lista

Elemento* CriaLista(void){
    return NULL;
}

int VerificaListaVazia(Elemento* lista){
    return (lista == NULL);
}

Elemento* InsereValoreLista(Elemento* lista, float n){
    Elemento *novo;
    novo = (Elemento*)malloc(sizeof(Elemento));
    novo->info = n;
    novo->prox = lista;
    return novo;
}

void LiberaLista(Elemento *lista){
    Elemento *p, *t;
    p = lista;

    while(p!=NULL){
        //Guarda referência para o próximo elemento
        t = p->prox;
        //Libera a memórianapontada por p
        free(p);
        //Faz apontar para ompróximo
        p=t;
    }
}


Elemento* InsereOrdenadoCrescente(Elemento* lista, float n){
    Elemento *novo;
    //Ponteiro para elemento anterior
    Elemento *ant;
    ant = NULL;
    //Ponteiro para percorrer a lista
    Elemento *lst;
    lst = lista;
    //Ponteiro para lista atualizada
    Elemento *rlst;
    rlst = lista;

    //Procurando a posição de inserção
    while(lst!=NULL && lst->info < n){
        ant = lst;
        lst = lst->prox;
    }

    //Cria novo elemento
    novo = (Elemento*)malloc(sizeof(Elemento));
    novo->info = n;

    //Encadeia elemento
    if(ant == NULL){
        //Insere elemento no início
        novo->prox = lista;
        rlst = novo;
    }

    else{
        //Insere no meio da lista
        novo->prox = ant->prox;
        ant->prox = novo;
    }

    return rlst;
}

Elemento* InsereOrdenadoDecrescente(Elemento* lista, float n){
    Elemento* novo;
    //Ponteiro para elemento anterior
    Elemento* ant = NULL;
    //Ponteiro para percorrer a lista
    Elemento* p = lista;
    //Ponteiro para lista atualizada
    Elemento* rp = lista;

    //Buscando a posição de inserção do elemento na lista
    while(p!=NULL && p->info > n){
        ant = p;
        p = p->prox;
    }

    //Cria novo elemento

    novo = (Elemento*)malloc(sizeof(Elemento));
    novo->info = n;

    //Encadeia elemento
    if(ant == NULL){
        //Insere elemento no inicio
        novo->prox = lista;
        rp = novo;
    }

    else{

        //Insere no meio da lista
        novo->prox = ant->prox;
        ant->prox = novo;
    }

    return rp;
}

//Funções para Pilha

Pilha* CriaPilha(void){
    Pilha* p;
    p = (Pilha*)malloc(sizeof(Pilha));
    p->topo = NULL;
    return p;
}

int VericaPilhaVazia(Pilha* p){
    if(p->topo == NULL){
        return 1;
    }

    else{
        return 0;
    }
}

void PilhaPush(Pilha* p, float v){
    Elemento* novo;
    novo = (Elemento*)malloc(sizeof(Elemento));
    novo->info = v;
    novo->prox = p->topo;
    p->topo = novo;
}

float PilhaPop (Pilha* p){
    Elemento *t;
    float v;

    if(VericaPilhaVazia(p)){
        printf("\n\nPilha vazia!\n");
        return 0.0;
    }

    t = p->topo;
    v = t->info;
    p->topo = t->prox;
    free(t);
    return v;
}

void LiberaPilha(Pilha* p){
    Elemento *t, *q;
    q = p->topo;

    while(q!=NULL){
        t = q->prox;
        free(q);
        q = t;
    }

    free(p);
}



void ReconstroiPilha(Elemento *lista, Pilha *p){
    Elemento *i;
    float n;

    for(i=lista;i!=NULL;i=i->prox){
        n = i->info;
        PilhaPush(p,n);
    }

}

void ImprimePilha(Pilha*p){
    float n;
    Elemento *q;
    q = CriaLista();

    printf("\n========== VALORES DA PILHA ==========\n\n");

    if(VericaPilhaVazia(p)){
        printf("\nA pilha esta vazia!\n");
    }

    else{
        while(!VericaPilhaVazia(p)){
            n = PilhaPop(p);
            q = InsereValoreLista(q,n);
            printf("\t\t%.2f\n",n);
        }
    }

    ReconstroiPilha(q,p);
    LiberaLista(q);

}


void CriaPilhaInvertida(Pilha *p, Pilha *q){
    Elemento *v;
    float n;
    v = CriaLista();

    while(!VericaPilhaVazia(p)){
        n = PilhaPop(p);
        v = InsereValoreLista(v,n);
        PilhaPush(q,n);
    }

    ReconstroiPilha(v,p);
    LiberaLista(v);

}


void PushOrdenadoDecrescente(Elemento *lista, Pilha *p){
    Elemento *i;
    float n;

    for(i=lista;i!=NULL;i=i->prox){
        n = i->info;
        PilhaPush(p,n);
    }
}


void PushOrdenadoCrescente(Elemento *lista, Pilha *p){
    Elemento *i;
    float n;

    for(i=lista;i!=NULL;i=i->prox){
        n = i->info;
        PilhaPush(p,n);
    }
}
