#include "DeclaraFuncao.h"
#include <stdio.h>
#include <stdlib.h>

int** CriaMatriz(int n){
    int i, **mat;

    mat = (int**) malloc(n*sizeof(int*));

    for(i=0;i<n;i++){
        mat[i] = (int*)malloc(n*sizeof(int));
    }

    return mat;

}


int** PreencheMatriz(int n){
    int i,j, **mat;
    mat = CriaMatriz(n);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            mat[i][j] = rand() % 10;
        }
    }

    return mat;
}


int** SomaMatriz(int **mat1, int **mat2,int n){
    int i,j,**mat;
    mat = CriaMatriz(n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            mat[i][j] = mat1[i][j]+mat2[i][j];
        }
    }

    return mat;
}

int** SubtracaoMatriz(int **mat1, int **mat2,int n){
    int i,j,**mat;
    mat = CriaMatriz(n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            mat[i][j] = mat1[i][j]-mat2[i][j];
        }
    }

    return mat;
}


void ImprimeSomaMatriz(int **mat1, int **mat2, int **mat3, int n){
    int i,j;
    printf("\n========== SOMA DE MATRIZES QUADRADAS DE ORDEM %dX%d ==========\n\n",n,n);
    printf("MATRIZ A\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("\t%d ",mat1[i][j]);
        }

        printf("\n");
    }

    printf("\n+ MATRIZ B\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("\t%d ",mat2[i][j]);
        }

        printf("\n");
    }

    printf("\nRESULTADO\n");

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("\t%d ",mat3[i][j]);
        }

        printf("\n");
    }
}


void ImprimeSubtracaoMatriz(int **mat1, int **mat2, int **mat3, int n){
    int i,j;
    printf("\n========== SUBTRACAO DE MATRIZES QUADRADAS DE ORDEM %dX%d ==========\n\n",n,n);
    printf("MATRIZ A\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("\t%d ",mat1[i][j]);
        }

        printf("\n");
    }

    printf("\n- MATRIZ B\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("\t%d ",mat2[i][j]);
        }

        printf("\n");
    }

    printf("\nRESULTADO\n");

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("\t%d ",mat3[i][j]);
        }

        printf("\n");
    }
}


int** MultiplicacaoMatriz(int **mat1, int **mat2,int n){
    int i,j,somaProd,**mat,k;
    mat = CriaMatriz(n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            somaProd = 0;
            for(k=0;k<n;k++){
                somaProd += mat1[i][k]*mat2[k][j];
                mat[i][j] = somaProd;
            }
        }
    }

    return mat;
}


void ImprimeMultiplicacaoMatriz(int **mat1, int **mat2, int **mat3, int n){
    int i,j;
    printf("\n========== Multiplicacao DE MATRIZES QUADRADAS DE ORDEM %dX%d ==========\n\n",n,n);
    printf("MATRIZ A\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("\t%d ",mat1[i][j]);
        }

        printf("\n");
    }

    printf("\n* MATRIZ B\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("\t%d ",mat2[i][j]);
        }

        printf("\n");
    }

    printf("\nRESULTADO\n");

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("\t%d ",mat3[i][j]);
        }

        printf("\n");
    }
}

