#include "DeclaraFuncao.h"

int FuncaoCapicua(int *vet){

    if(vet[3] == vet[0] && vet[1] == vet[2]){
        return 1;
    }

    else{
        return 0;
    }
}
