#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Exercício 01 Alocação dinânica - Implemente uma função em C que recebe dois vetores de inteiros v1 e v2, mais um inteiro N com
o tamanho dos vetores. Sua função deve alocar e retornar um vetor de inteiros de tamanho N onde o elemento na posição i de v3 é a
soma dos elementos na posição i de v1 e v2. Sua função deve ter a seguinte declaração:
int * soma_vetores(int *v1, int *v2, int N);
Para testar seu programa, crie uma função main() que chama sua função soma_vetores e imprime os valores somados.*/

int *soma_vetores(int *v1, int *v2, int n);

void main(void){

    setlocale(LC_ALL, "portuguese");

    int *vet1, *vet2, n, i, *soma;


    printf("\nDigite o tamanho do vetor: ");
    scanf("%d",&n);

    vet1 = (int *) malloc (n * sizeof(int));
    vet2 = (int *) malloc (n * sizeof(int));

    printf("\n----------DADOS DO VETOR 1----------\n");

    for(i=0;i<n;i++){
        printf("\nDigite um valor referente a posição %d do 1° vetor -> ",i);
        scanf("%d",&vet1[i]);
    }


    printf("\n----------DADOS DO 2° VETOR----------\n");

    for(i=0;i<n;i++){
        printf("\nDigite um valor referente a posição %d do vetor 2 -> ",i);
        scanf("%d",&vet2[i]);
    }

    system("cls");


    printf("\n----------SOMA DOS DADOS DOS VETORES 1 E 2----------\n");

    soma = soma_vetores(vet1,vet2,n);

    for(i=0;i<n;i++){
        printf("\n %d + %d = %d \n",vet1[i],vet2[i],soma[i]);
    }



    free(vet1);
    free(vet2);


}


int *soma_vetores(int *v1, int *v2, int n){
    int *vet3, i;

    vet3 = (int *) malloc (n * sizeof(int));

    for(i=0;i<n;i++){
        vet3[i] = v1[i] + v2[i];
    }


    return vet3;

    free(vet3);
}
