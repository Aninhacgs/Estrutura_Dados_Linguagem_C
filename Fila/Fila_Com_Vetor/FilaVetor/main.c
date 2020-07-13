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
        printf("1 - Criar uma Filha\n");
        printf("2 - Verificar se a Filha Esta Vazia\n");
        printf("3 - Inserir Valores na Fila\n");
        printf("4 - Remover Valores da Fila\n");
        printf("5 - Imprimir a Fila\n");
        printf("6 - Sair\n");
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
            InsereValor(f,n);
        break;

        case 4:
            n = RetiraValor(f);
            printf("O valor %.2f foi retirado da fila\n",v);
        break;

        case 5:
            ImprimeFila(f);
        break;
        }
    }while(opc!=6);

    return 0;
}
