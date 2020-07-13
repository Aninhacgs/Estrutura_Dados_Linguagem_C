#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vet,opc,i,resp;

    vet = (int*) malloc(4 * sizeof(int));

    do{
        printf("\n==========MENU==========\n");
        printf("1 - Verificar se o valor e capicua\n");
        printf("2 - Sair\n");
        printf("\nDigite uma opcao: ");
        scanf("%d",&opc);

        switch(opc){
        case 1:
            for(i=0;i<4;i++){
                printf("Digite o valor para o indice %d = ",i);
                scanf("%d",&vet[i]);
            }

            resp = FuncaoCapicua(vet);
            printf("\nOs valores %d%d%d%d sao capicua? %d\n\n",vet[0],vet[1],vet[2],vet[3],resp);
        break;
        }
    }while(opc!=2);

    free(vet);

}
