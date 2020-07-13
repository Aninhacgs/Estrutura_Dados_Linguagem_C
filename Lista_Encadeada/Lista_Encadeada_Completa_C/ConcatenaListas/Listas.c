#include "Listas.h"
#include <stdio.h>
#include <stdlib.h>

Lista* criaLista(void){
    return NULL;
}

int VerificaLista(Lista* lst){
    return (lst == NULL);
}

Lista* InsereValor(Lista* lst, float x){
    Lista* novo = (Lista*)malloc(sizeof(Lista));
    novo->info = x;
    novo->prox = lst;
    return novo;
}

void ImprimeLista(Lista* lst){
    Lista* p;
    printf("\n\n========== VALORES DA LISTA ==========\n\n");
    for(p=lst;p!=NULL;p=p->prox){
        printf("\t\t%.2f\n",p->info);
    }

    printf("\n\n");
}


Lista* Concatena(Lista* lst1, Lista* lst2){
    //Variável auxiliar para percorrer a lista
    Lista* p;
    //Variável auxiliar para criar nova lista
    Lista* q;

    if(lst1 == NULL){
        return lst2;
    }

    p = lst1;

    do{
        q = p;
        p = p->prox;
    }while(p!=NULL);
    q->prox = lst2;

    return lst1;
}


int BuscaValor(Lista* lst, float v){
    //Variável auxiliar para percorrer a lista
    Lista* p;
    int n=0;

    for(p=lst;p!=NULL;p=p->prox){
        if(p->info == v){
            n = 1;
            return n;
        }
    }

}


Lista* DividiLista(Lista* lst, float v){
    //Variável auciliar para percorrer a lista
    Lista* p;
    //Variável auxiliar para nova lista
    Lista* q;
    for(p=lst;p!=NULL;p=p->prox){
        if(p->info == v){
            q = p->prox;
            p->prox = NULL;
            return q;
        }
    }

    return NULL;
}

int IgualdadeListas(Lista* lst1, Lista* lst2){
    //Ponterio para percorrer lst1
    Lista *p;
    //Ponteiro para percorrer lst2;
    Lista *q;

    for(p=lst1,q=lst2;p!=NULL && q!=NULL;p=p->prox,q=q->prox){
        if(p->info != q->info){
            return 0;
        }
    }

    return p == q;
}


Lista* InsereOrdenado(Lista* lst, float v){
    Lista* novo;
    // Ponteiro para o elemento anterior
    Lista* ant = NULL;
    //Ponteiro para percorrer a lista
    Lista* p = lst;
    //Ponteiro para lista atualizada
    Lista* rlst = lst;

    //Procurando a posição de inserção
    while(p!=NULL && p->info < v){
        ant = p;
        p = p->prox;
    }

    //Cria novo elemento
    novo = (Lista*)malloc(sizeof(Lista));
    novo->info = v;

    //Encadeia elemento
    if(ant == NULL){
        //Insere elemeto no início
        novo->prox = lst;
        rlst = novo;
    }
    else{
        //Insere elemento no meio da lista
        novo->prox = ant->prox;
        ant->prox = novo;
    }

    return rlst;
}


Lista* InsereOrdenadoDecrecente(Lista* lst, float v){
    Lista* novo;
    // Ponteiro para o elemento anterior
    Lista* ant = NULL;
    //Ponteiro para percorrer a lista
    Lista* p = lst;
    //Ponteiro para lista atualizada
    Lista* rlst = lst;

    //Procurando a posição de inserção
    while(p!=NULL && p->info > v){
        ant = p;
        p = p->prox;
    }

    //Cria novo elemento
    novo = (Lista*)malloc(sizeof(Lista));
    novo->info = v;

    //Encadeia elemento
    if(ant == NULL){
        //Insere elemeto no início
        novo->prox = lst;
        rlst = novo;
    }
    else{
        //Insere elemento no meio da lista
        novo->prox = ant->prox;
        ant->prox = novo;
    }

    return rlst;
}


Lista* RemoveValor(Lista* lst, float v){
    //Ponteiro para o elemento anterior
    Lista* ant = NULL;
    //Ponteiro para percorrer a lista
    Lista* p= lst;
    //Ponteiro para lista atualizada
    Lista* rlst = lst;

    //Procurando o elemento na lista e guardando o anterior
    while(p!=NULL && p->info!= v){
        ant = p;
        p=p->prox;
    }

    //Verifica se achou o elemetno
    if(p==NULL){
        //Não achou, retorna lista original
        return rlst;
    }
    if(ant == NULL){
        //Retra elemento do início
        rlst=p->prox;
    }
    else{
        //Retira elemento do meio da lista
        ant->prox = p->prox;
    }

    free(p);
    return rlst;
}


void LiberarLista(Lista* lst){
    Lista *p, *t;
    p = lst;
    while(p!=NULL){
        //Guarda a referencia para o próximo elemento
        t = p->prox;
        //Libera a memória apontada por p
        free(p);
        //Faz apontar para o próximo
        p=t;
    }
}
