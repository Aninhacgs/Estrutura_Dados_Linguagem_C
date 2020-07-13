#ifndef DECLARAFUNCAO_H_INCLUDED
#define DECLARAFUNCAO_H_INCLUDED
#endif // DECLARAFUNCAO_H_INCLUDED

typedef struct aluno{
    char nome[100];
    char disciplina[100];
    char situacao[50];
    int matricula;
    float p1,p2,p3,media;
}Aluno;

void IniciaEstrutura(Aluno *a[],int n);
void CadastroAluno(Aluno *a[], int n);
void ImprimeCadastro(Aluno *a[], int n);
void BuscaAluno(Aluno *a[], int n, int matricula);
void CalculaMedia(Aluno *a[],int n);
