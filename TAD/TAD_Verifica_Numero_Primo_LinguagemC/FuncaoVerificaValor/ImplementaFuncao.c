/*Link três soluções para números primos: https://www.ime.usp.br/~yw/2012/mac110/material/primo.html*/
#include "DeclaraFuncao.h"

int FuncaoVerificaValor(int valor){
    int div, resp;

    if(valor <= 1 || (valor != 2 && valor % 2 == 0)){
        resp = 0; /* nenhum numero inteiro <= 1 ou par > 2 e' primo */
    }
    else{
        resp = 1; /* o numero e' primo ate que se prove o contrario */
    }

    div = 3;

    while( resp && div <= valor / 2){
        if(valor % div == 0){
            resp = 0;
        }
        div = div + 2; /* testamos so' os  impares: 3, 5, 7... */
    }

    return resp;
}
