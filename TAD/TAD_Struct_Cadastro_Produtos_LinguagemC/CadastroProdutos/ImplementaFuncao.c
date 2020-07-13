#include<stdio.h>
#include <stdlib.h>
#include "DeclaraFuncao.h"

void IniciarEstrutura(Produto *vet[], int n){
    int i;

    for(i=0;i<n;i++){
        vet[i] = malloc(1 * sizeof(Produto));
    }
}

void CadastroProdutos(Produto *vet[], int n){
    int i;

    for(i=0;i<n;i++){
        printf("\nDigite o codigo do produto para o indice %d: ",i);
        fflush(stdin);
        scanf("%d",&vet[i]->codigo);
        printf("\nDigite a descricao do produto: ");
        fflush(stdin);
        scanf("%s",&vet[i]->nome);
        printf("\nDigite a quantidade: ");
        fflush(stdin);
        scanf("%d",&vet[i]->quantidade);
        printf("\nDigite o preco: ");
        fflush(stdin);
        scanf("%f",&vet[i]->preco);
    }
}


void ImprimirProdutos(Produto *vet[], int n){
    int i;
    printf("==========PRODUTOS==========");

    for(i=0;i<n;i++){
        printf("\nProduto(%d)\n",i);
        printf("\nCodigo -> %d\n",vet[i]->codigo);
        printf("Nome -> %s\n",vet[i]->nome);
        printf("Quantidade -> %d\n",vet[i]->quantidade);
        printf("Preco R$: %.2f\n",vet[i]->preco);
    }
}
