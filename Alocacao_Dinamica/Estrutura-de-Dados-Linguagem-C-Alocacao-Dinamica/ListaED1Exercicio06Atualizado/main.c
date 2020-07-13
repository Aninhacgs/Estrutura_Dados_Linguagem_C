#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Exercício 06 Alovação Dinâmica - Faça um programa que simule ’virtualmente’ a memória de um computador: o usuário começa
especificando o tamanho da memória (define quantos bytes tem a memória), e depois ele irá ter 2 opções: inserir um dado em um
determinado endereço, ou consultar o dado contido em um determinado endereço. A memória deve iniciar com todos os dados zerados.*/

void main(void){

    setlocale(LC_ALL, "portuguese");

    int opc,*vet,n,i,memoria;

    printf("\nDigite o tamanho da memória: ");
    scanf("%d",&n);

    vet = (int *) malloc (n * sizeof(int));

    do{
        printf("\n1 - Inserir um dado em um endereço de memória\n");
        printf("\n2 - Consultar um dado contido em um endereço de memória\n");
        printf("\n3 - Sair");

        printf("\n\nDigite a opção: ");
        scanf("%d",&opc);

        switch(opc){
        case 1:
            system("cls");
            printf("\n----------Endereços de memórias----------");

            for(i=0;i<n;i++){
                printf("\n %d \n",&vet[i]);
            }

            printf("\nDigite o endereço de memória para selecioná-lo: ");
            scanf("%d",&memoria);

            for(i=0;i<n;i++){
                if(memoria == &vet[i]){
                    printf("\nDigite o valor para armazená-lo na memória: ");
                    scanf("%d",&vet[i]);
                }
            }

            system("cls");


            break;

        case 2:
            system("cls");
            printf("\n----------Endereços de memórias----------");

            for(i=0;i<n;i++){
                printf("\n %d \n",&vet[i]);
            }

            printf("\nDigite o endereço de memória para selecioná-lo: ");
            scanf("%d",&memoria);

            for(i=0;i<n;i++){
                if(memoria == &vet[i]){
                    printf("\n\nValor armazenado no endereço de memória %d -> %d\n\n",&vet[i],vet[i]);
                }
            }


            break;


        case 3:
            system("cls");
            return 0;

        default:
            printf("\nOpção inválida!");

        }
    }while(opc != 3);
}
