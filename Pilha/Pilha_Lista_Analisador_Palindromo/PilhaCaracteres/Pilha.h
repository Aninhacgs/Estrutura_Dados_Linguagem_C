
typedef struct caracteres{
    char c;
    struct caracteres *prox;
}Caracteres;

typedef struct pilha{
    Caracteres *topo;
}Pilha;


//Fun��es Pilha
Pilha* CriaPilha(void);
int VerificaPilhaVazia(Pilha *p);
void PilhaPush(Pilha *p, char s);
char PilhaPop(Pilha *p);
void ImprimePilha(Pilha *p);
void PilhaInvertida(Pilha *p, Pilha *p1);
int AnalisadorPalindromo(Pilha *p, Pilha *p1);
void DestruirPilha(Pilha *p);


//Fun��es de Listas

Caracteres* CriaLista(void);
Caracteres* InsereValor(Caracteres *p, char c);
void LiberaLista(Caracteres *c);
