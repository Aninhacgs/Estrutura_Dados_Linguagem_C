#include <stdio.h>
#include <stdlib.h>
#include "DeclaraFuncao.h"

void main(void)
{
    int opc, **mat1, **mat2, **mat3,n;

    do{
        printf("\n\n==========MENU==========\n");
        printf("1 - Criar Matriz\n");
        printf("2 - Preencher Matriz\n");
        printf("3 - Somar Matrizes Quadradas\n");
        printf("4 - Imprimir Soma de Matrizes Quadradas\n");
        printf("5 - Subtracao de Matrizes Quadradas\n");
        printf("6 - Imprimir Resultado Suntracao de Matrizes Quadradas\n");
        printf("7 - Multiplicar Matrizes Quadradas\n");
        printf("8 - Imprimir Resultado Multiplicacao de Matrizes Quadradas\n");
        printf("9 - Liberar Matrizes\n");
        printf("10 - Sair\n");
        printf("\nSelecione uma opcao: ");
        scanf("%d",&opc);

        switch(opc){
        case 1:
            printf("\nDigite um valor entre 1 e 10 para a quantidade de linhas e colunas: ");
            scanf("%d",&n);
            while(n<=0 || n>10){
                printf("Valor incorreto! Por favor digite novamente: ");
                scanf("%d",&n);
            }

            mat1 = CriaMatriz(n);
            mat2 = CriaMatriz(n);
            mat3 = CriaMatriz(n);

        break;

        case 2:
            mat1=PreencheMatriz(n);
            mat2=PreencheMatriz(n);

        break;

        case 3:
            mat3 = SomaMatriz(mat1,mat2,n);

        break;

        case 4:
            ImprimeSomaMatriz(mat1,mat2,mat3,n);
        break;

        case 5:
            mat3 = SubtracaoMatriz(mat1,mat2,n);
        break;

        case 6:
            ImprimeSubtracaoMatriz(mat1,mat2,mat3,n);
        break;

        case 7:
            mat3 = MultiplicacaoMatriz(mat1,mat2,n);
        break;

        case 8:
            ImprimeMultiplicacaoMatriz(mat1,mat2,mat3,n);
        break;

        case 9:
            free(mat1);
            free(mat2);
            free(mat3);
        break;

        }
    }while(opc!=10);
}
