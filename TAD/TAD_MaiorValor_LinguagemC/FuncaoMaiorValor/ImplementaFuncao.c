#include "DeclaraFuncao.h"
#include <stdio.h>
#include <stdlib.h>

int FuncaoMaiorValor(int n1, int n2){
    int maior = 0,aux;
    aux = n2 - 1;
    while(n2>n1){
        if(aux > maior){
            maior = aux;
        }
        n2--;
        aux = n2;
    }

    return maior;
}
