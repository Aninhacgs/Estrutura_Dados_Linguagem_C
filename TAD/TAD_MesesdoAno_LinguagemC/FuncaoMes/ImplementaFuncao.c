#include"DeclaraFuncao.h"
#include <stdio.h>
#include <stdlib.h>

void FuncaoMes(int n){
    switch (n){
    case 1:
        printf("\nMes -> Janeiro");
    break;

    case 2:
        printf("\nMes -> Fevereiro");
    break;

    case 3:
        printf("\nMes -> Marco");
    break;

    case 4:
        printf("\nMes -> Abril");
    break;

    case 5:
        printf("\nMes -> Maio");
    break;

    case 6:
        printf("\nMes -> Junho");
    break;

    case 7:
        printf("\nMes -> Julho");
    break;

    case 8:
        printf("\nMes -> Agosto");
    break;

    case 9:
        printf("\nMes -> Setembro");
    break;

    case 10:
        printf("\nMes -> Outubro");
    break;

    case 11:
        printf("\nMes -> Novembro");
    break;

    case 12:
        printf("\nMes -> Dezembro");
    break;

    default:
        printf("\nValor incorreto para mes!");

    }
}
