#include <stdio.h>
#include <stdlib.h>
#include "DeclaraFuncao.h"
#include <string.h>
int main()
{
    int opc;
    char letra;
    int resp;

    do{
        printf("\n==========MENU==========\n");
        printf("1 - Vereificar se e uma letra do alfabeto\n");
        printf("2 - Verificar se o caracter e um digito\n");
        printf("3 - Verificar se e um caracter minusculo\n");
        printf("4 - Verificar se e um caracter maiusculo\n");
        printf("5 - Verificar se o caracter e um digito hexadecimal\n");
        printf("6 - Verificar se o caracter e imprimivel\n");
        printf("7 - Verificar se o caracter e um ponto\n");
        printf("8 - Verificar se o caracter e um espaco em branco\n");
        printf("\nDigite uma opcao: ");
        scanf("%d",&opc);

        switch(opc){
        case 1:
            printf("\nDigite o valor: ");
            fflush(stdin);
            scanf("%c",&letra);
            resp = FuncaoAnalisaLetra(letra);
            printf("\n\nO valor %c e uma letra do alfabeto? %d\n",letra,resp);
        break;

        case 2:
            printf("\nDigite o valor: ");
            fflush(stdin);
            scanf("%c",&letra);
            resp = FuncaoAnalisaDigito(letra);
            printf("\n\nO valor %c e um digito? %d\n",letra,resp);
        break;

        case 3:
            printf("\nDigite o valor: ");
            fflush(stdin);
            scanf("%c",&letra);
            resp = FuncaoAnalisaCaracterMinusculo(letra);
            printf("\n\nO valor %c e um caracter minusculo? %d\n",letra,resp);
        break;

        case 4:
            printf("\nDigite o valor: ");
            fflush(stdin);
            scanf("%c",&letra);
            resp = FuncaoAnalisaCaracterMaiusculo(letra);
            printf("\n\nO valor %c e um caracter maiusculo? %d\n",letra,resp);
        break;

        case 5:
            printf("\nDigite o valor: ");
            fflush(stdin);
            scanf("%c",&letra);
            resp = FuncaoAnalisaCaracterMaiusculo(letra);
            printf("\n\nO valor %c e um digito hexadecimal? %d\n",letra,resp);
        break;

        case 6:
            printf("\nDigite o valor: ");
            fflush(stdin);
            scanf("%c",&letra);
            resp = FuncaoAnalisaCaracterImprimivel(letra);
            printf("\n\nO valor %c e um caracter imprimivel? %d\n",letra,resp);
        break;

        case 7:
            printf("\nDigite o valor: ");
            fflush(stdin);
            scanf("%c",&letra);
            resp = FuncaoAnalisaCaracterImprimivel(letra);
            printf("\n\nO valor %c e um ponto? %d\n",letra,resp);
        break;

        case 8:
            printf("\nDigite o valor: ");
            fflush(stdin);
            scanf("%c",&letra);
            resp = FuncaoAnalisaCaracterEspacoBranco(letra);
            printf("\n\nO valor %c e um espaco em branco? %d\n",letra,resp);
        break;


        }

    }while(opc!=9);

}
