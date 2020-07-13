typedef struct lista{
    float info;
    struct lista *prox;
}Lista;

Lista* criaLista(void);
int VerificaLista(Lista* lst);
Lista* InsereValor(Lista* lst, float x);
void ImprimeLista(Lista* lst);
Lista* Concatena(Lista* lst1, Lista* lst2);
int BuscaValor(Lista* lst, float v);
Lista* DividiLista(Lista* lst, float v);
int IgualdadeListas(Lista* lst1, Lista* lst2);
Lista* InsereOrdenado(Lista* lst, float v);
Lista* InsereOrdenadoDecrecente(Lista* lst, float v);
Lista* RemoveValor(Lista* lst, float v);
void LiberarLista(Lista* lst);
