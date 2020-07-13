#include "Fila.h"
#include <stdio.h>
#include <stdlib.h>

Fila* CriaFila(void){
    Fila *f;
    f = (Fila*)malloc(sizeof(Fila));
    f->n = 0;
    f->ini = 0;
    return f;
}

int VerificaFilaVazia(Fila *f){
    if(f->n == 0){
        return 1;
    }

    else{

        return 0;
    }
}

void InsereValor(Fila *f, float v){
    int fim;
    if(f->n == N){
        printf("\nA capacidade da fila estourou!\n");
        return 0;
    }

    fim = (f->ini + f->n) % N;
    f->vet[fim] = v;
    f->n++;
}


float RetiraValor(Fila *f){
    float v;
    if(VerificaFilaVazia(f)){
        printf("\nA fila esta vazia!\n");
        return 0;
    }

    v = f->vet[f->ini];
    f->ini = (f->ini + 1) % N;
    f->n--;
    return v;
}

void ImprimeFila(Fila *f){
    float v;
    int n = 0;
    printf("\n========== VALORES DA FILA ==========\n");
    while(!VerificaFilaVazia(f)){
        v = RetiraValor(f);
        n++;
        printf("\t\t%.2f\n",v);
    }

    printf("\n\nForam inseridos %d valores na filha!\n",n);

}
