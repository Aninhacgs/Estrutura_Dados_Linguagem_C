#include <stdio.h>
#include <stdlib.h>

/*Exerc�cio 08 Aloca��o Din�mica - Fa�a um la�o de entrada de dados, onde o usu�rio deve digitar uma sequ�ncia de n�meros, sem
limite de quantidade de dados a ser fornecida. O usu�rio ir� digitar os n�meros um a um, sendo que caso ele deseje encerrar a
entrada de dados, ele ir� digitar o n�mero Zero. No final, todos os dados digitados dever�o ser apresentados na tela.
Aten��o, os dados devem ser armazenados na mem�ria deste modo: fa�a com que o programa inicie criando um ponteiro para um bloco
(vetor) de 10 valores inteiros, e alocando dinamicamente espa�o em mem�ria para este bloco; depois, caso o vetor alocado fique
cheio, aloque um novo vetor do tamanho do vetor anterior adicionado com espa�o para mais 10 valores (tamanho N+10, onde N inicia
com 10); repita este procedimento de expandir dinamicamente com mais 10 valores o vetor alocado cada vez que o mesmo estiver
cheio. Assim o vetor ir� ser �expandido� de 10 em 10 valores.*/

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
