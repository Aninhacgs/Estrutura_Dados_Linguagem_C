#include "DeclaraFuncao.h"
#include <stdio.h>
#include <stdlib.h>

void DiasSemana(int n){
    switch(n){
    case 1:
        printf("\nDia -> Domingo\n");
    break;

    case 2:
        printf("\nDia -> Segunda Feira\n");
    break;

    case 3:
        printf("\nDia -> Terca Feira\n");
    break;

    case 4:
        printf("\nDia -> Quarta Feira\n");
    break;

    case 5:
        printf("\nDia -> Quinta Feira\n");
    break;

    case 6:
        printf("\nDia -> Sexta Feira\n");
    break;

    case 7:
        printf("\nDia -> Sabado\n");
    break;

    default:
        printf("\nValor incorreto para dias da semana!\n");
    }
}
