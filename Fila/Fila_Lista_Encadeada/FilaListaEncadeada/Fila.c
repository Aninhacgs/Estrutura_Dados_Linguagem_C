#include "Fila.h"
#include <stdio.h>
#include <stdlib.h>

Fila* CriaFila(void){
    Fila *f;
    f = (Fila*)malloc(sizeof(Fila));
    f->ini = NULL;
    f->fim = NULL;

    return f;
}


int VerificaFilaVazia(Fila* f){
    if(f->ini == NULL){
        return 1;
    }
    else{

        return 0;
    }
}


void InsereValores(Fila* f, float n){
    Elemento *novo;
    novo = (Elemento*)malloc(sizeof(Elemento));
    novo->info = n;
    novo->prox = NULL;

    if(f->fim != NULL){
        //Se a fila não está vazia, encadeia novo no fim
        f->fim->prox = novo;
    }

    else{
        //Se a fila está vazia, novo é também o primeiro
        f->ini = novo;
    }

    //Ajusta ponteiro fim

    f->fim = novo;
}


float RetiraValor(Fila* f){
     Elemento *t;
     float n;

     if(VerificaFilaVazia(f)){
        printf("\nA fila esta vazia!\n");
        return 0;
     }

     t = f->ini;
     n = t->info;
     f->ini = t->prox;

     //Se a fila ficou vazia, ajusta o fim
     if(f->ini == NULL){
        f->fim = NULL;
     }

     free(t);
     return n;
}


void LiberaFila(Fila *f){
    Elemento *q;
    q = f->ini;
    while(q!=NULL){
        Elemento *t = q->prox;
        free(q);
        q = t;
    }
    free(f);
}

void ImprimeFila(Fila *f){
    float n;
    printf("\n========== VALORES DA FILA ==========\n");
    while(!VerificaFilaVazia(f)){
        n = RetiraValor(f);
        printf("\t\t%.2f\n",n);
    }
}
