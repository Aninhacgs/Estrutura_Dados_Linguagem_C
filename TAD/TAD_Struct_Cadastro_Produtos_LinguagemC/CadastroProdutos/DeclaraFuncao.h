#ifndef DECLARAFUNCAO_H_INCLUDED
#define DECLARAFUNCAO_H_INCLUDED
#endif // DECLARAFUNCAO_H_INCLUDED

typedef struct produtos{
    int codigo, quantidade;
    float preco;
    char nome[51];
}Produto;

void IniciarEstrutura(Produto *vet[], int n);
void ImprimirProdutos(Produto *vet[], int n);
void CadastroProdutos(Produto *vet[], int n);
