#include <stdio.h>
#include <stdlib.h>

/*Exercício 04 Alocação Dinâmica - Faça um programa para armazenar em memória um vetor de dados contendo 1500 valores do tipo int,
usando a função de alocação dinâmica de memória calloc:
a. Faça um loop e verifique se o vetor contém realmente os 1500 valores inicializados com zero (conte os 1500 zeros do vetor).
b. Atribua para cada elemento do vetor o valor do seu índice junto a este vetor.
c. Exibir na tela os endereços dos 10 primeiros e dos 10 últimos elementos do vetor.*/

void main(void){
    const int n = 1500;
    int *vet,i, cont = 0;

    vet = calloc(n,sizeof(int));

    for(i=0;i<n;i++){
        if(vet[i] == 0){
            cont ++;
        }
    }

    printf("\nA quantidade de posicoes do vetor que foram incicalizadas com zero: %d",cont,"\n\n");


    for(i=0;i<n;i++){
        vet[i] = i;
    }


    printf("\n\n----------ENDERECOS 10 PRIMEIROS VALORES DO VETOR DE 1500 POSICOES----------\n");

    for(i=0;i<10;i++){
        printf("\n indice do vetor %d = %d\n",i,&vet[i]);
    }


    printf("\n----------ENDERECOS 10 ULTIMOS VALORES DO VETOR DE 1500 POSICOES----------\n");

    for(i=1490;i<1500;i++){
        printf("\n indice do vetor %d = %d\n",i,&vet[i]);
    }


    free(vet);
}
