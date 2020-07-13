#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"

int main()
{
    int opc, v;
    float n;
    Fila *f;
    do{
        printf("\n========== MENU ==========\n");
        printf("1 - Criar uma Fila\n");
        printf("2 - Verificar se a Fila Esta Vazia\n");
        printf("3 - Inserir Valores na Fila\n");
        printf("4 - Retirar Valor da Fila\n");
        printf("5 - Liberar Fila\n");
        printf("6 - Imprimir Fila\n");
        printf("7 - Sair\n");
        printf("\n\nSelecione uma opcao: ");
        scanf("%d",&opc);

        switch(opc){
        case 1:
            f = CriaFila();
        break;

        case 2:
            v = VerificaFilaVazia(f);
            printf("\nA fila esta vazia? %d\n",v);
        break;

        case 3:
            printf("\nDigite um valor: ");
            scanf("%f",&n);
            InsereValores(f,n);
        break;

        case 4:
            n = RetiraValor(f);
            printf("\nValor retirado da fila\n%.2f",n);
        break;

        case 5:
            LiberaFila(f);
        break;

        case 6:
            ImprimeFila(f);
        break;

        }
    }while(opc!=7);
    return 0;
}
