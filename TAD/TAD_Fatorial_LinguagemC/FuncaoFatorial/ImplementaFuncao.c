#include "DeclaraFuncao.h"
#include <stdio.h>
#include <stdlib.h>

int FuncaoFatorial(int n){
    int soma = 1;

    while(n!=1){
        soma = soma * n;
        n--;

    }

    return soma;
}
