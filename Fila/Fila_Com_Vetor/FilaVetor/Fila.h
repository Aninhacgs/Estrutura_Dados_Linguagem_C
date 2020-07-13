#define N 100

typedef struct fila{
    int n, ini;
    float vet[N];
}Fila;

Fila* CriaFila(void);
int VerificaFilaVazia(Fila *f);
void InsereValor(Fila *f, float v);
float RetiraValor(Fila *f);
void ImprimeFila(Fila *f);
