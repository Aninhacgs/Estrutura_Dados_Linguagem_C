#include <stdio.h>
#include <stdlib.h>

/*Exerc�cio 02 Aloca��o din�mica - Escreva um programa que aloque dinamicamente uma matriz (de inteiros) de dimens�es definidas
pelo usu�rio e preencha a matriz com n�meros aleat�rios (rand). Em seguida, implemente uma fun��o que receba um valor, retorne 1
caso o valor esteja na matriz ou retorne 0 caso n�o esteja na matriz.*/

int consulta_valores(l,c,valor);

void main(void){
    int n,m,valor,resposta;

    printf("\nDigite a quantidade de linhas da matriz: ");
    scanf("%d",&n);

    printf("\nDigite a quantidade de colunas da matriz: ");
    scanf("%d",&m);

    printf("\nDitie o valor no intervalo de 1 a 10 que deseja consultar na matriz: ");
    scanf("%d",&valor);

    resposta = consulta_valores(n,m,valor);

    printf("\nO valor consultado esta na matriz: %d \n",resposta);
}


int consulta_valores(l,c,valor){
    int **matriz;
    int i,j,resultado;

    matriz = (int **) malloc(l * sizeof(int *));

    for(i=0;i<l;i++){
            matriz[i] = (int *) malloc(c * sizeof(int));
       }

    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            matriz[i][j] = rand()%10;
        }
    }


     for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            if(matriz[i][j] == valor){
                resultado = 1;
            }
            else{
                resultado = 0;
            }
        }
    }

    return resultado;

    free(matriz);
}
