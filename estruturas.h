typedef struct Brasileiro
{
    char cpf[13];
    char rg[9];
} brasileiro;

typedef struct Estrangeiro
{
    char passaporte[10];
    char pais_orig[20];
} estrangeiro;

typedef struct PNE
{
    char laudo[10];
} pne;

typedef struct Aluno
{
    long int matricula;
} aluno;

typedef struct Professor
{
    char pis[11];
} professor;

typedef struct Cadastro
{
    char nome[15];
    char sobrenome[30];
    int nacionalidade;
    union
    {
        brasileiro brasileiro;
        estrangeiro estrangeiro;
    };
    int tipo;
    union
    {
        aluno aluno;
        professor professor;
    };
    int pnet;
    union
    {
        pne pne;
    };
    int dia;
    int mes;
    int ano;
    int cep;
    char endereco[200];
} cadastros ;

typedef struct Disciplina
{
    int codigo;
    char nome[30];
    int carga;
    cadastros professordisciplina;
    cadastros alunos[10];
    int qtdAlunos;

} disciplina;

typedef struct Escola
{
    cadastros pessoas[60];
    disciplina disciplinas[10];
    int qtdProfessores;
    int qtdAlunos;
    int qtdDisciplinas;
} escola;

static const struct Cadastro EmptyStruct;