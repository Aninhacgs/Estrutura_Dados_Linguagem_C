#define TAM 100

typedef struct{
    float valores[TAM];
    int primeiro,ultimo;
}TipoLista;

void FazListaVazia(TipoLista *lista);
int TestaListaVazia(TipoLista *lista);
void InsereLista(float x, TipoLista *lista);
void ImprimeLista(TipoLista *lista);
int BuscaLista(float x, TipoLista *lista);

