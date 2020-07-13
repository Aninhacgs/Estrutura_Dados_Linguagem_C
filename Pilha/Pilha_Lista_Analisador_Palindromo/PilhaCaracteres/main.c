#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"
#include <string.h>
int main()
{
    Pilha *p;
    Pilha *p1;
    int opc, v;
    char *texto, c;
    int tam,i;

    texto = malloc(100*sizeof(char));

    do{
        printf("\n======================= MENU ====================\n");
        printf("1 - Criar Pilha\n");
        printf("2 - Verificar se a Pilha Vazia\n");
        printf("3 - Inserir Valores na Pilha\n");
        printf("4 - Remover Valores da Pilha\n");
        printf("5 - Imprimir Pilha\n");
        printf("6 - Criar Pilha Invertida\n");
        printf("7 - Imprimir Pilha Invertida\n");
        printf("8 - Destrutir Pilha Invertida\n");
        printf("9 - Analisar se o Valor da Pilha Corresponde a um Palindromo\n");
        printf("10 - Destruir Pilha\n");
        printf("11 - Sair\n");
        printf("\n\nSelecione uma opcao: ");
        scanf("%d",&opc);

        switch(opc){
        case 1:
            p = CriaPilha();
        break;

        case 2:
            v = VerificaPilhaVazia(p);
            printf("\nA pilha esta vazia? %d\n",v);
        break;

        case 3:
            printf("\nDigite a palavra: ");
            fflush(stdin);
            gets(texto);
            tam = strlen(texto);
            strupr(texto);
            for(i=0;i<tam;i++){
                c = texto[i];
                PilhaPush(p,c);
            }

        break;

        case 4:
            c = PilhaPop(p);
            printf("\nCaracter removido da pilha -> %c\n",c);
        break;

        case 5:
            printf("\n\nImprimindo a pilha da string %s\n",texto);
            ImprimePilha(p);
        break;

        case 6:
            p1 = CriaPilha();
            PilhaInvertida(p,p1);
        break;

        case 7:
            ImprimePilha(p1);
        break;

        case 8:
            DestruirPilha(p1);
        break;

        case 9:
            p1 = CriaPilha();
            PilhaInvertida(p,p1);
            v = AnalisadorPalindromo(p,p1);
            printf("\nA palavra %s e um palindromo? %d\n\n",texto,v);
        break;

        case 10:
            DestruirPilha(p);
        break;

        }

    }while(opc!=11);

    free(texto);
}
