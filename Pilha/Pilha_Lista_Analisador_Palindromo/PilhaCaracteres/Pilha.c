#include "Pilha.h"
#include <stdio.h>
#include <stdlib.h>

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

void PilhaPush(Pilha *p, char s){
    Caracteres *novo;
    novo = (Caracteres*)malloc(sizeof(Caracteres));
    novo->c = s;
    novo->prox = p->topo;
    p->topo = novo;
}


char PilhaPop(Pilha *p){
    Caracteres *t;
    char c;

    if(VerificaPilhaVazia(p)){
        printf("\nA pilha esta vazia!\n");
        return 0;
    }

    t = p->topo;
    c = t->c;
    p->topo = t->prox;
    free(t);

    return c;
}

void RecuperaPilha(Pilha *p, Caracteres *c){
    Caracteres *q;
    char s;
    for(q=c;q!=NULL;q=q->prox){
        fflush(stdin);
        s = q->c;
        PilhaPush(p,s);
    }

    LiberaLista(q);
}


void ImprimePilha(Pilha *p){
    Caracteres *t;
    Caracteres *q;
    q = CriaLista();
    char c;
    printf("\n========== PILHA DE CARACTERES ==========\n\n");
    while(!VerificaPilhaVazia(p)){
        t = p->topo;
        c = t->c;
        q = InsereValor(q,c);
        p->topo = t->prox;
        free(t);
        printf("\t\t%c\n",c);
    }

    printf("\n\n");

    RecuperaPilha(p,q);
}

void PilhaInvertida(Pilha *p, Pilha *p1){
    Caracteres *q;
    q = CriaLista();
    char c;

    while(!VerificaPilhaVazia(p)){
        c = PilhaPop(p);
        q = InsereValor(q,c);
        PilhaPush(p1,c);
    }

    RecuperaPilha(p,q);
}

int AnalisadorPalindromo(Pilha *p, Pilha *p1){
    Caracteres *q;
    q = CriaLista();
    Caracteres *q1;
    q1 = CriaLista();

    int i;

    char c, c1;

    while(!VerificaPilhaVazia(p)&&!VerificaPilhaVazia(p1)){
        c = PilhaPop(p);
        q = InsereValor(q,c);
        c1 = PilhaPop(p1);
        q1 = InsereValor(q1,c1);

        if(c == c1){
            i = 1;
        }

        else{
            i = 0;
        }
    }

    RecuperaPilha(p,q);
    RecuperaPilha(p1,q1);

    return i;

}


void DestruirPilha(Pilha *p){
    char c;
    while(!VerificaPilhaVazia(p)){
        c = PilhaPop(p);
    }

    printf("\n\nA Pilha foi destruida!\n\n");
}


//Funções de Listas

Caracteres* CriaLista(void){
    return NULL;
}

Caracteres* InsereValor(Caracteres *p, char c){
    Caracteres *novo;
    novo = (Caracteres*)malloc(sizeof(Caracteres));
    novo->c = c;
    novo->prox = p;
    return novo;
}

void LiberaLista(Caracteres *c){
    Caracteres *q,*t;
    q = c;
    while(q!=NULL){
        t = q->prox;
        free(q);
        q=t;
    }

}
