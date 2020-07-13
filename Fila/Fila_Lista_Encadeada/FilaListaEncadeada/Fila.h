typedef struct elemento{
    float info;
    struct elemento *prox;
}Elemento;


typedef struct fila{
    Elemento *ini;
    Elemento *fim;
}Fila;

Fila* CriaFila(void);
int VerificaFilaVazia(Fila* f);
void InsereValores(Fila* f, float n);
float RetiraValor(Fila* f);
void LiberaFila(Fila *f);
void ImprimeFila(Fila *f);
