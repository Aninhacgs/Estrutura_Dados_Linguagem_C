
#include "VetorAD.h"
#include <stdio.h>
#include <stdlib.h>

int* CriaVetor(int n){
    int *vet;
    vet = malloc(n*sizeof(int));
    return vet;
}

int InsereValor(int *vet, int v, int p){
    int resp = 0;
    if(p<=15){
        vet[p] = v;
        resp = 1;
        }

    return resp;
}

void LiberaVetor(int* v){
    free(v);
    printf("\nVetor Liberado!\n");
}

void ImprimeVetor(int *vet, int n){
    int i;
    printf("\n========== VETOR ==========\n");
    for(i=0;i<n;i++){
      printf("\t[%d] = %d\n",i,vet[i]);
    }

    printf("\n\n");
}
