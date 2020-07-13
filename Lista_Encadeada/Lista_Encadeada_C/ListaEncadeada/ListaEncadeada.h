
typedef struct elemento{
    int info;
    struct elemento *prox;
}Elemento;

Elemento* lst_cria(void);
Elemento* lst_insere(Elemento* lst, int val);
void lst_imprime(Elemento* lst);
int lst_vazia(Elemento* lst);
Elemento* busca(Elemento* lst, int v);
Elemento* lst_retira(Elemento* lst, int val);
void lst_libera(Elemento* lst);
Elemento* lst_ordenado(Elemento* lst, int val);
int lst_igual(Elemento* lst1, Elemento* lst2);
