#include "DeclaraFuncao.h"

int FuncaoVerificaDivisor(int x, int y){
    int resp, div;

    if(x % y == 0){
        resp = 1;
    }
    else if(x != 0){
        resp = 0;
    }

    return resp;
}
