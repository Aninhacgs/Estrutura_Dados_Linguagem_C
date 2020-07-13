#include "DeclaraFuncoes.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor1, valor2, opc, result;
    float res,v1,v2;
    do{
        printf("\n==========MENU==========\n");
        printf("1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("5 - Potenciacao\n");
        printf("6 - Raiz Quadrada\n");
        printf("7 - Calcular o seno\n");
        printf("8 - Calcular a tangente\n");
        printf("9 - Calcular o cosseno\n");
        printf("10 - Arredondar um valor para cima\n");
        printf("11 - Arredondar um valor para baixo\n\n");

        printf("\nSelecione uma opcao: ");
        scanf("%d",&opc);

        switch(opc){
        case 1:
            printf("\nDigite o primeiro valor: ");
            scanf("%d",&valor1);
            printf("\nDigite o sedungo valor: ");
            scanf("%d",&valor2);
            result = Soma(valor1,valor2);
            printf("\n\nA soma dos valores %d e %d = %d\n\n",valor1,valor2,result);
        break;

        case 2:
            printf("\nDigite o primeiro valor: ");
            scanf("%d",&valor1);
            printf("\nDigite o sedungo valor: ");
            scanf("%d",&valor2);
            result = Subtracao(valor1,valor2);
            printf("\nA subtracao dos valores %d e %d = %d\n\n",valor1,valor2,result);
        break;


        case 3:
            printf("\nDigite o primeiro valor: ");
            scanf("%d",&valor1);
            printf("\nDigite o sedungo valor: ");
            scanf("%d",&valor2);
            result = Multiplicacao(valor1,valor2);
            printf("\nA multiplicacao dos valores %d e %d = %d\n\n",valor1,valor2,result);
        break;

        case 4:
            printf("\nDigite o primeiro valor: ");
            scanf("%f",&v1);
            while(valor1<= 0.0){
                printf("O valor deve ser maior que zero! Por favor digite novamente: ");
                scanf("%f",&v1);
            }
            printf("\nDigite o sedungo valor: ");
            scanf("%f",&v2);
            while(valor2<= 0.0){
                printf("O valor deve ser maior que zero! Por favor digite novamente: ");
                scanf("%f",&v2);
            }
            res = Divisao(v1,v2);
            printf("\nA divisao dos valores %.2f e %.2f = %.2f\n\n",v1,v2,res);
        break;

        case 5:
            printf("\nDigite o valor da base: ");
            scanf("%d",&valor1);
            printf("\nDigite o valor do expoente: ");
            scanf("%d",&valor2);
            while(valor2<0){
                printf("O valor deve ser maior ou igual que zero! Por favor digite novamente: ");
                scanf("%d",&valor2);
            }
            result = Potenciacao(valor1,valor2);
            printf("\nO resultado da potenciacao de %d elevado a %d = %d\n\n",valor1,valor2,result);
        break;

        case 6:
            printf("\nDigite o valor para calcular a raiz quadrada: ");
            scanf("%d",&valor1);
            while(valor1<0){
                printf("O valor deve ser maior ou igual que zero! Por favor digite novamente: ");
                scanf("%d",&valor1);
            }
            result = Raiz(valor1);
            printf("\nA raiz quadrada do valor %d = %d\n\n",valor1,result);
        break;

        case 7:
            printf("\nDigite o valor do angulo: ");
            scanf("%d",&valor1);
            res = Seno(valor1);
            printf("\nO seno do angulo %d = %.2f\n\n",valor1,res);
        break;

        case 8:
            printf("\nDigite o valor do angulo: ");
            scanf("%d",&valor1);
            res = Tangente(valor1);
            printf("\nA tangente do angulo %d = %.2f\n\n",valor1,res);
        break;

        case 9:
            printf("\nDigite o valor do angulo: ");
            scanf("%d",&valor1);
            res = Cosseno(valor1);
            printf("\nO cosseno do angulo %d = %.2f\n\n",valor1,res);
        break;

        case 10:
            printf("\nDigite o valor: ");
            scanf("%f",&v1);
            res = ArredondaCima(v1);
            printf("\nO valor %.2f foi arredondado para %.2f\n\n",v1,res);
        break;

        case 11:
            printf("\nDigite o valor: ");
            scanf("%f",&v1);
            res = ArredondaBaixo(v1);
            printf("\nO valor %.2f foi arredondado para %.2f\n\n",v1,res);
        break;


        }
    }while(opc!=12);

    return 0;
}


