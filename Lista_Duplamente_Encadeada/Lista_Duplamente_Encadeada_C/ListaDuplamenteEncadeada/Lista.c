#include "Lista.h"
#include <stdio.h>
#include <stdlib.h>

Elemento* lst_insere(Elemento* lst,int val){
    Elemento* novo;
    novo = (Elemento*)malloc(sizeof(Elemento));
    novo->info = val;
    novo->prox = lst;
    novo->ant = NULL;

    //Verificar se a lista não estava vazia
    if(lst!=NULL){
        //Ajusta o ponteiro do antigo 1º elemento
        lst->ant = novo;
    }

    //Retorna o poteiro da lista atualizada
    return novo;
}

Elemento* lst_busca(Elemento* lst, int val){
    Elemento* p;
    for(p=lst;p!=NULL;p=p->prox){
        if(p->info == val){
            return p;
        }
    }

    return NULL;
}

Elemento* lst_retira(Elemento* lst, int val){
     Elemento* p;
     p = lst_busca(lst,val);

     //Para retornar ponteiro atualizado
     Elemento* rlst;
     rlst = lst;

     if(p == NULL){
        //Não achou o elemento retorna a lista inalterada
        return rlst;
     }

     //Retirando o elemento do encadeamento

     //Tentando se é o primeiro elemento
     if(rlst == p){
        rlst = p->prox;
     }
     else{
        p->ant->prox = p->prox;
     }

     //Testa se é o último elemento
     if(p->prox !=NULL){
        p->prox->ant = p->ant;
     }

     free(p);
     return rlst;
}

void imprime_inverso(Elemento* lst){
    Elemento* p;
    p= lst;

    while(p->prox!=NULL){
        p = p->prox;
    }

    Elemento*q;

    printf("\nSENTIDO INVERSO\n");

    printf("\n========== LISTA DUPLEMENTE ENCADEADA ==========\n\n");
    for(q=p;q!=NULL;q=q->ant){
        printf("\t\t\t%d\n",q->info);
    }



    printf("\n\n");
}

Elemento* lst_criaLista(){
    return NULL;
}

int lst_verificaListaVazia(Elemento* lst){
    return lst == NULL;
}

void imprime_lista(Elemento* lst){
    Elemento* p;
    printf("\nSENTIDO ULTIMO ATE O PRIMEIRO\n");
    printf("\n========== LISTA DUPLAMENTE ENCADEADA ==========\n");
    for(p=lst;p!=NULL;p=p->prox){
        printf("\t\t\t%d\n",p->info);
    }
}


Elemento* libera_lista(Elemento* lst){
    Elemento* p;
    p = lst->ant;

    //Libera anterior
    while(p!=NULL){
        free(p);
        p = p->ant;
    }

    //Libera próximo

    p = lst;

    while(p!=NULL){
        free(p);
        p = p->prox;
    }


    return p;
}

Elemento* busca_ultimo(Elemento* lst){
    Elemento* novo;
    novo = lst;

    if(novo != NULL){
        while(novo->prox != NULL){
            novo = novo->prox;
        }
        return novo;
    }

    return NULL;
}
