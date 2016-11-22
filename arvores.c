#include <stdlib.h>
#include <time.h>

//definição da estrutura de árvore de diretório
typedef struct arvdir{
    struct arvdir *pai, *filho, *irmao;
    char[] nome, dat_criacao, dat_atualiza, permissoes;
    int num_de_dir, num_de_arq, arquivo;

}TAD;

//definição dos métodos básicos de árvores
TAD * cria (char[] c){
    time_t rawtime;
    struct tm * timeinfo;
    char str[20];
    TAD *a = (TAD*) malloc (sizeof(TAD));
    a.pai = NULL;
    a.filho = NULL;
    a.irmao = NULL;
    nome = c;
    
    time ( &rawtime );
    timeinfo = localtime ( &rawtime );
    strftime(str, 20, "%d/%m/%Y %H:%M:%S", timeinfo);
    
    dat_criacao = str;
    dat_atualiza = str;
    num_de_dir = 0;
    num_de_arq = 0;
    arq = 0;
};
