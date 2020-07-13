#include "DeclaraFuncao.h"
#include <stdio.h>
#include <stdlib.h>

int** FazMatriz(int l, int c){
    int ** matriz,i;

    matriz = (int**) malloc(l * sizeof(int*));

    for(i=0;i<l;i++){
        matriz[i] = (int*) malloc(c * sizeof(int));

    }

    return matriz;
}


void PreencheMatriz(int **m,int l,int c){
    int i,j;

    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            m[i][j] = rand() % 10;
        }
    }

}


void ImprimirMatriz(int **m, int l, int c){
    int i,j;
    printf("\n==========MATRIZ==========\n");
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            printf("  %d\t",m[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");
}


void DiagonalPrincipal(int **m, int l, int c){
    int i,j;
    printf("\n==========DIAGONAL PRINCIPAL==========\n");
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            if(i!=j){
                 m[i][j] = 0;
            }

            printf("  %d\t",m[i][j]);

        }
        printf("\n");
    }

    printf("\n\n");
}


void ValoresAbaixoDP(int **m, int l, int c){
    int i,j;
    printf("\n==========VALORES ABAIXO DA DIAGONAL PRINCIPAL==========\n");
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            if(i<j){
                 m[i][j] = 0;
            }

            if(i==j){
                 m[i][j] = 0;
            }

            printf("  %d\t",m[i][j]);

        }
        printf("\n");
    }

    printf("\n\n");
}


void ValoresAcimaDP(int **m, int l, int c){
    int i,j;
    printf("\n==========VALORES ACIMA DA DIAGONAL PRINCIPAL==========\n");
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            if(i>j){
                 m[i][j] = 0;
            }

            if(i==j){
                 m[i][j] = 0;
            }

            printf("  %d\t",m[i][j]);

        }
        printf("\n");
    }

    printf("\n\n");

}



void DiagonalSecundaria(int **m, int l, int c){
    int i,j;

    printf("\n==========DIAGONAL SECUNDARIA==========\n");
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
                if(!(i+j == l-1)){
                    m[i][j] = 0;
                }

                printf("  %d\t",m[i][j]);

            }

        printf("\n");
    }

    printf("\n\n");

}
