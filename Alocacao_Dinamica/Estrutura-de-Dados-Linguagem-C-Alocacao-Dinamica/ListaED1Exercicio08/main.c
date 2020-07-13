#include <stdio.h>
#include <stdlib.h>

/*Exercício 08 Alocação Dinâmica - Faça um laço de entrada de dados, onde o usuário deve digitar uma sequência de números, sem
limite de quantidade de dados a ser fornecida. O usuário irá digitar os números um a um, sendo que caso ele deseje encerrar a
entrada de dados, ele irá digitar o número Zero. No final, todos os dados digitados deverão ser apresentados na tela.
Atenção, os dados devem ser armazenados na memória deste modo: faça com que o programa inicie criando um ponteiro para um bloco
(vetor) de 10 valores inteiros, e alocando dinamicamente espaço em memória para este bloco; depois, caso o vetor alocado fique
cheio, aloque um novo vetor do tamanho do vetor anterior adicionado com espaço para mais 10 valores (tamanho N+10, onde N inicia
com 10); repita este procedimento de expandir dinamicamente com mais 10 valores o vetor alocado cada vez que o mesmo estiver
cheio. Assim o vetor irá ser ’expandido’ de 10 em 10 valores.*/

void main (void){
    int *vet1 = NULL, i, valor, tamanho=0;

    while(valor !=0){

        if(tamanho == 0){
            vet1 = (int *) malloc(tamanho * sizeof(int));
            for(i=0;i<1;i++){
                printf("\nDigite um valor para a posicao %d do vetor :",tamanho);
                scanf("%d",&valor);
                vet1[i] = valor;
            }

            tamanho = 1;
        }

        else{

            tamanho ++;
            vet1 = realloc (vet1, tamanho * sizeof(int));
            for(i=i;i<tamanho;i++){
                printf("\nDigite um valor para a posicao %d do vetor :",tamanho -1);
                scanf("%d",&valor);
                vet1[i] = valor;
            }

        }
    }


system("cls");

    printf("\n==========VALORES DO VETOR==========\n");
    for(i=0;i<tamanho;i++){
            if(vet1[i] !=0){
                printf(" \t \t %d \n",vet1[i]);
            }

    }


}
