#include <stdio.h>
#include <stdlib.h>

/*Exercicio 5 Aloca��o Din�mica - Fa�a um programa que pergunte ao usu�rio quantos valores ele deseja armazenar em um vetor de
 doubles, depois use a fun��o malloc para reservar (alocar) o espa�o de mem�ria de acordo com o especificado pelo usu�rio.
 Use este vetor din�mico como um vetor comum, atribuindo aos 10 primeiros elementos do vetor valores aleat�rios (rand) entre 0 e
 100. Exiba na tela os valores armazenados nos 10 primeiros elementos do vetor (O vetor deve ter pelo menos um tamanho igual a 10
doubles, ou mais).*/

void main(void){
    double *vet,n;
    int i;

    printf("Digite o tamanho do vetor: ");
    scanf("%lf",&n);

    while(n < 10){
        printf("\nA quantidade de indices deve ser igual ou superior a 10!\n");
        printf("\nDigite o tamanho do vetor: ");
        scanf("%lf",&n);
    }

    vet = malloc(n * sizeof(double));

    for(i=0;i<10;i++){
        vet[i] = rand()%100;
    }

    printf("\n----------Valores Aleatorios das 10 Primeiras Posicoes do Vetor----------\n");

    for(i=0;i<10;i++){
        printf("\n%.2f\n",vet[i]);
    }


    free(vet);

}
