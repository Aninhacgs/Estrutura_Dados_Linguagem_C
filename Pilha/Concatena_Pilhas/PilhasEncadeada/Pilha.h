
typedef struct elemento{
    int info;
    struct elemento *prox;
}Elemento;


typedef struct pilha{
    Elemento *topo;
}Pilha;


//Funções da pilha

Pilha* CriaPilha(void);
int VerificaPilhaVazia(Pilha *p);
void PilhaPush(Pilha *p, int n);
int PilhaPop(Pilha *p);
void ImprimePilha(Pilha *p);
