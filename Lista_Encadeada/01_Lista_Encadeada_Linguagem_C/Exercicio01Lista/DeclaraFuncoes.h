#ifndef DECLARAFUNCOES_H_INCLUDED
#define DECLARAFUNCOES_H_INCLUDED
#endif // DECLARAFUNCOES_H_INCLUDED
#define TAM 100

typedef struct{
    int itens[TAM];
    int primeiro, ultimo;
}TipoLista;

//funções exportadas

//cria uma lista vazia
void FazListaVazia(TipoLista *lista);

//testa se a lista é vazia
int TestaListaVazia(TipoLista *lista);

//insere um elemento do tipo TipoCelula na lista
void InsereLista(int x, TipoLista *lista);

//remove um elemento do tipo TipoCelula da lista
void RemoveLista(int p, TipoLista *lista, int *x);

//imprime os elementos da lista
void ImprimeLista(TipoLista *lista);

//void Imprime os elementos da lista de forma recursiva

void ImprimeListaRecursiva(TipoLista *lista);

//Busca elemento na lista
int BuscaElementoLista(TipoLista *lista, int x);

