
typedef struct lista{
    float info;
    struct lista *prox;
}Lista;

Lista* CriaLista();
int VerificaListaVazia(Lista* lst);
Lista* InsereValor(Lista* lst, float n);
void ImprimeLista(Lista* lst);
int BuscaValor(Lista* lst, float n);
Lista* RemoveValor(Lista* lst, float n);
void LiberaLista(Lista* lst);
Lista* RetiraPrefixo(Lista* lst, int n);
int ComprimentoLista(Lista* lst);
