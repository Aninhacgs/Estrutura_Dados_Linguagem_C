#include <stdio.h>
#include <stdlib.h>
#include "VetorAd.h"

int main()
{
    int n,*vet,valor,opc,cont,resp,aux;

     aux = 0;

    do{
        printf("\n========== MENU ==========\n");
        printf("1 - Criar vetor\n");
        printf("2 - Inserir valores no Vetor\n");
        printf("3 - Imprimir Vetor\n");
        printf("4 - Liberar Vetor\n");
        printf("5 - Sair\n");
        printf("\n\nSelecione uma opcao: ");
        scanf("%d",&opc);

        while(opc<1 || opc>5){
            printf("Valor incorreto! Digite novamente: ");
            scanf("%d",&opc);
        }


        switch(opc){
        case 1:
            system("cls");
            printf("\nDigite o tamanho do vetor: ");
            scanf("%d",&n);

            while(n<=0){
                printf("Valor incorreto! Digite novamente: ");
                scanf("%d",&n);
            }

            vet = CriaVetor(n);
            cont = n;
        break;

        case 2:
          system("cls");
          printf("\nExistem %d posicoes livres no vetor\n",cont);
          if(cont==0){
            printf("\nNao existem posicoes livres no vetor!\n");
          }
          else if(cont<=n){
            printf("\nDigite um valor para inserir no vetor: ");
            scanf("%d",&valor);
            resp = InsereValor(vet,valor,aux);
            if(resp == 1){
                aux++;
                cont--;
            }
          }

        break;

        case 3:
            system("cls");
            ImprimeVetor(vet,aux);
        break;

        case 4:
            system("cls");
            LiberaVetor(vet);
        break;

        }

    }while(opc!=5);
    return 0;
}
