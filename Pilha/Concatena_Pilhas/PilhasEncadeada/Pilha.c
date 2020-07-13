#include <stdio.h>
#include <stdio.h>
#include "Pilha.h"

Pilha* CriaPilha(void){
    Pilha *p;
    p = (Pilha*)malloc(sizeof(Pilha));
    p->topo = NULL;
    return p;
}

int VerificaPilhaVazia(Pilha *p){
    if(p->topo == NULL){
        return 1;
    }
    else{
        return 0;
    }
}


void PilhaPush(Pilha *p, int n){
    Elemento *novo;
    novo = (Elemento*)malloc(sizeof(Elemento));
    novo->info = n;
    novo->prox = p->topo;
    p->topo = novo;
}


int PilhaPop(Pilha *p){
    int n;
    Elemento* t;

    if(VerificaPilhaVazia(p)){
        printf("\nA pilha esta vazia!\n");
        return 0.0;
    }

    t = p->topo;
    n = t->info;
    p->topo = t->prox;
    free(t);
    return n;
}

void ImprimePilha(Pilha *p){
   // Elemento *q;
   int n;
   printf("\n========== VALORES DA PILHA ==========\n\n");
   while(!VerificaPilhaVazia(p)){
      n = PilhaPop(p);
      printf("\t\t%d\n",n);
   }

}


void ConcatenaPilhas(Pilha *p1, Pilha *p2){
    int n;
    if(VerificaPilhaVazia(p1)||VerificaPilhaVazia(p2)){
        printf("\nNao foi possivel contenar as pilhas, pois uma delas esta vazia!\n");
    }
    else{
        while(!VerificaPilhaVazia(p2)){
        n = PilhaPop(p2);
        PilhaPush(p1,n);
       }
    }

}
