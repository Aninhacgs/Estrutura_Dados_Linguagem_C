include"DeclaraFuncao.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int FuncaoAnalisaLetra(char c){
    if(isalpha(c)){
        return 1;
    }
    else{
        return 0;
    }

}

int FuncaoAnalisaDigito(char c){
    if(isdigit(c)){
        return 1;
    }
    else{
        return 0;
    }

}

int FuncaoAnalisaCaracterMinusculo(char c){
    if(islower(c)){
        return 1;
    }
    else{
        return 0;
    }
}


int FuncaoAnalisaCaracterMaiusculo(char c){
    if(isupper(c)){
        return 1;
    }
    else{
        return 0;
    }
}


int FuncaoAnalisaCaracterHexadecimal(char c){
    if (isxdigit(c)){
        return 1;
    }
    else{
        return 0;
    }
}


int FuncaoAnalisaCaracterImprimivel(char c){
    if (isprint(c)){
     return 1;
    }

    else{
        return 0;
    }
}

int FuncaoAnalisaCaracterPonto(char c){
    if(ispunct(c)){
        return 1;
    }

    else{
        return 0;
    }

}


int FuncaoAnalisaCaracterEspacoBranco(char c){
    if (isspace(c)){
        return 1;
    }

    else{
        return 0;
    }
}
