
typedef struct elemento{
    float info;
    struct elemento *prox;
}Elemento;

typedef struct pilha{
    char *descricao;
    Elemento *topo;
}Pilha;

Pilha* CriaPilha(void);
int VericaPilhaVazia(Pilha* p);
void PilhaPush(Pilha* p, float v);
float PilhaPop (Pilha* p);
void LiberaPilha(Pilha* p);
void ImprimePilha(Pilha*p);
void ReconstroiPilha(Elemento *lista, Pilha *p);
void CriaPilhaInvertida(Pilha *p, Pilha *q);
void PushOrdenadoDecrescente(Elemento *lista, Pilha *p);
void PushOrdenadoCrescente(Elemento *lista, Pilha *p);



//Funções de Listas

Elemento* CriaLista(void);
int VerificaListaVazia(Elemento* lista);
Elemento* InsereValoreLista(Elemento* lista, float n);
void LiberaLista(Elemento *lista);
Elemento* InsereOrdenadoCrescente(Elemento* lista, float n);
Elemento* InsereOrdenadoDecrescente(Elemento* lista, float n);
