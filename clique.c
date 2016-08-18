#include <stdio.h>

//para este exemplo o aluno só poderá ter 5 disciplinas;
struct disciplinas
{
    char disc1[10];
    char disc2[10];
    char disc3[10];
    char disc4[10];
    char disc5[10];
};
struct aluno
{
    int matricula;
    struct disciplinas vetor_disc;
};

int main(void)
{
    struct aluno aluno_teste;
    aluno mat_aluno
    int cont = 0;
    char caminho_arquivo[]="C:\\Users\\estagiario\\Desktop\\josafa\\analise de algoritmo\\dados.txt";
    char ch;
    FILE *arq;

    arq = fopen(caminho_arquivo, "r");
    if(arq == NULL)
        printf("Erro! Não foi possivel abrir o arquivo\n");
    else
    {
        while( (fscanf(arq,"%s %f %f %f\n", aluno_teste.matricula, aluno, &nota2, &nota3))!=EOF )
            printf("%s teve media %.2f\n", nome, (nota1+nota2+nota3)/3);

    }

}

fclose(arq);
}
