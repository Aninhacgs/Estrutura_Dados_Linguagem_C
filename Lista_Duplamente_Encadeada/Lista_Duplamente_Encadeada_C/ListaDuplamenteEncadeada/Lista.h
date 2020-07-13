typedef struct elemento{
    int info;
    struct elemento *ant;
    struct elemento *prox;
}Elemento;

Elemento* lst_insere(Elemento* lst,int val);
Elemento* lst_busca(Elemento* lst, int val);
Elemento* lst_retira(Elemento* lst, int val);
void imprime_inverso(Elemento* lst);
void imprime_lista(Elemento* lst);
Elemento* lst_criaLista();
int lst_verificaListaVazia(Elemento* lst);
Elemento* libera_lista(Elemento* lst);
Elemento* busca_ultimo(Elemento* lst);

