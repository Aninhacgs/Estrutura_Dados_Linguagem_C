#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Exercício 11 Alocação Dinâmica - Faça um programa que:
a. Crie uma matriz de distancias entre n cidades diferentes;
b. Peça para o usuário entrar com as distâncias entre as cidades;
c. Exiba na tela a matriz de distancias criada;
Quando o usuário digitar o número de duas cidades o programa deverá retornar a distância entre elas.*/

void main(void){

    setlocale(LC_ALL,"portuguese");

    int i,j,linha,coluna,l,c,y,x;
    float **matriz,A,B,distancia;


    printf("\n==========CRIANDO A MATRIZ==========\n");
    printf("\nDigite a quantidade de linhas: ");
    scanf("%d",&linha);
    printf("\nDigite a quantidade de colunas: ");
    scanf("%d",&coluna);

    matriz = (float **) malloc(linha * sizeof(float));

    for(i=0;i<linha;i++){
        matriz[i] = (float *) malloc (coluna * sizeof(float));
    }

    system("cls");

    printf("\n========== ENTRADA DE DADOS ==========\n");

    printf("\nDigite um valor entre 0 e % d para selecionar a linha da cidade A: ",linha - 1);
    scanf("%d",&l);

    printf("\nDigite um valor ente 0 e %d para selecionar a coluna da cidade A: ",coluna - 1);
    scanf("%d",&c);


    printf("\nDigite um valor entre 0 e % d para selecionar a linha da cidade B: ",linha - 1);
    scanf("%d",&x);

    while(x == l){
        printf("\nEsta posição já está ocupada. Por favor digite um valor válido: ");
        scanf("%d",&x);
    }

    printf("\nDigite um valor ente 0 e %d para selecionar a coluna da cidade B: ",coluna - 1);
    scanf("%d",&y);

    while(y == c){
        printf("\nEsta posição já está ocupada. Por favor digite um valor válido: ");
        scanf("%d",&y);
    }



    printf("\nDigite o valor da cidade A: ");
    scanf("%f",&A);

    printf("\nDigite o valor da cidade B: ");
    scanf("%f",&B);

    while(B <= A){
        printf("\nO valor da cidade B deve ser maior em releção a cidade A. Por favor digite um valor válido: ");
        scanf("%f",&B);
    }


    distancia = B - A;


    system("cls");

    printf("\n========== DISTÂNCIA DAS CIDADES A E B ==========\n");
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            if(l == i  && c == j){
                matriz[i][j] = A;
            }

            if(x == i && y == j){
                matriz[i][j] = B;
            }
            printf("\t %.1f",matriz[i][j]);
        }

        printf("\n");
    }

    printf("\n\nA distância entre as cidades A e B = %.2f m \n\n",distancia);


    free(matriz);
}
