#include "Lista.h"
#include <stdio.h>
#include <stdlib.h>

Lista* CriaLista(){
    return NULL;
}

int VerificaListaVazia(Lista* lst){
    return (lst == NULL);
}

Lista* InsereValor(Lista* lst, float n){
    Lista* novo;
    novo = (Lista*)malloc(sizeof(Lista));
    novo->info = n;
    novo->prox = lst;
    return novo;
}

void ImprimeLista(Lista* lst){
    //Variável para percorrer a lista
    Lista* p;
    printf("\n========== LISTA ENCADEADA ==========\n");
    for(p=lst;p!=NULL;p=p->prox){
        printf("\t\t%.2f\n",p->info);
    }
}


int BuscaValor(Lista* lst, float n){
    Lista* p;
    int v=0;

    for(p=lst;p!=NULL;p=p->prox){
        if(p->info == n){
            v = 1;
        }
    }

    return v;
}


void LiberaLista(Lista* lst){
    Lista *p, *t;
    p = lst;

    while(p!=NULL){
        //Guardando a referencia par ao próximo elemento
        t = p->prox;
        //Liberando a memoria apontada por p
        free(p);
        //Apontando para o próximo
        p = t;
    }

}


Lista* RemoveValor(Lista* lst, float n){
    //Ponteiro para o elemetno anterior
    Lista* ant = NULL;
    //ponteiro para percorrer a lista
    Lista* p = lst;
    //Ponteiro para lista atualizada
    Lista* rlst = lst;

    while(p!=NULL && p->info != n){
        ant = p;
        p = p->prox;
    }

    //Verifica se achou o elemento
    if(p == NULL){
        //Não achou, retorna lista original
        return rlst;
    }

    if(ant == NULL){
        //Retira o elemento no inicio
        rlst = p->prox;
    }

    else{
        //Retira do meio da lista
        ant->prox = p->prox;
    }

    free(p);
    return rlst;

}


Lista* RetiraPrefixo(Lista* lst, int n){
    //Variável auxiliar para percorrer a lista
    Lista* p;
    //Varivel auxiliar
    Lista* q;

    int m = 1;
    p = lst;

    while(p!=NULL && m<=n){
        m++;
        q = p->prox;
        free(p);
        p = q;
    }

    return p;
}


int ComprimentoLista(Lista* lst){
    Lista *p;
    int cont = 0;
    for(p=lst;p!=NULL;p=p->prox){
        cont++;
    }

    return cont;
}
