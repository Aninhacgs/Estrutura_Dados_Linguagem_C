#include <stdio.h>
#include <stdlib.h>
#include "DeclaraFuncao.h"

void main(void)
{
    int **matriz,l,c,opc;

    do{
        printf("\n==========MENU==========\n");
        printf("1 - Criar matriz\n");
        printf("2 - Preencher matriz com valores aleatorios\n");
        printf("3 - Calcular a diagonal principal\n");
        printf("4 - Elementos acima da diagonal principal\n");
        printf("5 - Elementos abaixo da diagonal principal\n");
        printf("6 - Calcular a diagonal secundaria\n");
        printf("7 - Imprimir matriz\n");
        printf("8 - Liberar matriz\n");
        printf("9- Sair\n");
        printf("\nSelecione uma opcao: ");
        scanf("%i",&opc);

        switch(opc){
        case 1:
            printf("\nDigite a quantidade de linhas: ");
            scanf("%i",&l);
            while(l<=0){
                printf("\nValor incorreto para quantidade de linhas. Por favor digite novamente: ");
                scanf("%i",&l);
            }
            printf("\nDigite a quantidade de colunas: ");
            scanf("%i",&c);
            while(c<=0){
                printf("\nValor incorreto para quantidade de colunas. Por favor digite novamente: ");
                scanf("%i",&c);
            }

            matriz = FazMatriz(l,c);
        break;


        case 2:
            PreencheMatriz(matriz,l,c);
        break;

        case 3:
            DiagonalPrincipal(matriz,l,c);
        break;

        case 4:
            ValoresAcimaDP(matriz,l,c);
        break;

        case 5:
            ValoresAbaixoDP(matriz,l,c);
        break;

        case 6:
            DiagonalSecundaria(matriz,l,c);
        break;

        case 7:
            ImprimirMatriz(matriz,l,c);
        break;

        case 8:
            free(matriz);
        break;

        }
    }while(opc!=9);
}
