#include "DeclaraFuncoes.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int Soma(int n1, int n2){
    int result;
    result = n1 + n2;
    return result;
}

int Subtracao(int n1, int n2){
    int result;
    result = n1 - n2;
    return result;
}


int Multiplicacao(int n1, int n2){
    int result;
    result = n1 * n2;
    return result;
}


float Divisao(float n1, float n2){
    float result;
    result = n1 / n2;
    return result;
}


int Potenciacao(int n1,int n2){
    int result;
    result = pow(n1,n2);
    return result;
}


float Raiz(int n){
    float result;
    result = sqrt(n);
    return result;
}


float Cosseno(int n){
    float result;
    result = cos(n);
    return result;
}

float Seno(int n){
    float result;
    result = sin(n);
    return result;
}

float Tangente(int n){
    float result;
    result = atan(n);
    return result;
}


float ArredondaCima(float n){
    float result;
    result = ceil(n);
    return result;
}


float ArredondaBaixo(float n){
    float result;
    result = floor(n);
    return result;
}
