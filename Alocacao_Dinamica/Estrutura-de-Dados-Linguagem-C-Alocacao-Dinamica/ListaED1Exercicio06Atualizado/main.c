#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Exerc�cio 06 Alova��o Din�mica - Fa�a um programa que simule �virtualmente� a mem�ria de um computador: o usu�rio come�a
especificando o tamanho da mem�ria (define quantos bytes tem a mem�ria), e depois ele ir� ter 2 op��es: inserir um dado em um
determinado endere�o, ou consultar o dado contido em um determinado endere�o. A mem�ria deve iniciar com todos os dados zerados.*/

void main(void){

    setlocale(LC_ALL, "portuguese");

    int opc,*vet,n,i,memoria;

    printf("\nDigite o tamanho da mem�ria: ");
    scanf("%d",&n);

    vet = (int *) malloc (n * sizeof(int));

    do{
        printf("\n1 - Inserir um dado em um endere�o de mem�ria\n");
        printf("\n2 - Consultar um dado contido em um endere�o de mem�ria\n");
        printf("\n3 - Sair");

        printf("\n\nDigite a op��o: ");
        scanf("%d",&opc);

        switch(opc){
        case 1:
            system("cls");
            printf("\n----------Endere�os de mem�rias----------");

            for(i=0;i<n;i++){
                printf("\n %d \n",&vet[i]);
            }

            printf("\nDigite o endere�o de mem�ria para selecion�-lo: ");
            scanf("%d",&memoria);

            for(i=0;i<n;i++){
                if(memoria == &vet[i]){
                    printf("\nDigite o valor para armazen�-lo na mem�ria: ");
                    scanf("%d",&vet[i]);
                }
            }

            system("cls");


            break;

        case 2:
            system("cls");
            printf("\n----------Endere�os de mem�rias----------");

            for(i=0;i<n;i++){
                printf("\n %d \n",&vet[i]);
            }

            printf("\nDigite o endere�o de mem�ria para selecion�-lo: ");
            scanf("%d",&memoria);

            for(i=0;i<n;i++){
                if(memoria == &vet[i]){
                    printf("\n\nValor armazenado no endere�o de mem�ria %d -> %d\n\n",&vet[i],vet[i]);
                }
            }


            break;


        case 3:
            system("cls");
            return 0;

        default:
            printf("\nOp��o inv�lida!");

        }
    }while(opc != 3);
}
