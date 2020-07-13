#include <stdio.h>
#include <stdlib.h>

/*Exercicio 03 Alocação Dinâmica -
Faça um programa que leia dois números n e m e, usando ponteiros duplos (ponteiro para ponteiro):
a. Crie e leia uma matriz n x m de inteiros;
b. Crie e construa uma matriz transposta (trocando linhas por colunas) m x n de inteiros.
Na sua função main(), mostre as duas matrizes.
Dica: lembre-se de que uma matriz é um ’vetor de vetores.*/

int cria_matriz(l,c);
void imprime_matriz(int **matriz,int linha,int coluna);
void imprime_matriz_transposta(int **matriz,int linha,int coluna);
void main(void){
    int linha, coluna,i,j;
    int **mat1;

    printf("\nDigite a quantidade de linhas da matriz: ");
    scanf("%d",&linha);

    printf("\nDigite a quantidade de colunas da matriz: ");
    scanf("%d",&coluna);


    mat1= cria_matriz(linha,coluna);

    imprime_matriz(mat1,linha,coluna);

    imprime_matriz_transposta(mat1,linha,coluna);





}


int cria_matriz(l,c){
    int **matriz;
    int i,j;

    matriz = (int **) malloc (l * sizeof(int *));

    for(i=0;i<l;i++){
        matriz[i] = (int *) malloc(c * sizeof(int));
    }


    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            matriz[i][j] = rand()%100;
        }
    }


    return matriz;

    free(matriz);

}


void imprime_matriz(int **matriz,int linha,int coluna){
    int i,j;

    printf("\n----------MATRIZ----------\n");

    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            printf("%d\t",matriz[i][j]);
        }
        printf("\n");
    }
}


void imprime_matriz_transposta(int **matriz,int linha,int coluna){
    int i,j;

     printf("\n----------MATRIZ TRANSPOSTA----------\n");

    for(i=0;i<coluna;i++){
        for(j=0;j<linha;j++){
            printf("%d \t",matriz[j][i]);
        }
        printf("\n");
    }
}




