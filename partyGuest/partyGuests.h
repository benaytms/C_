#include"intro.h"


void print_str(int v, char *n) {

    for (int i=0; i<v ; i++) {
        printf("%c", n[i]);
    }

}


void liberaMem(char *n, char *m) {

    if (*n == '0')
        return;
    if (*m == '0')
        return;
    free(n);
    n = NULL;
    free(m);
    m = NULL;

}

void removeSpacesFromStr(char **string, char *nome) {
    for (int k=0 ; k<MAX_NAMES ; k++){
        int non_space_count = 0;
 
        for (int i = 0; string[k][i] != '\0'; i++) {
            if (string[k][i] != ' ') {
                string[k][non_space_count] = string[k][i];
                non_space_count++;
            }
        }
        string[k][non_space_count] = '\0';
    }
    
    for (int h=0 ; h<MAX_NAMES ; h++){
        int non_space_count = 0;
 
        for (int i = 0; nome[i] != '\0'; i++) {
            if (nome[i] != ' ') {
                nome[non_space_count] = nome[i];
                non_space_count++;
            }
        }
        nome[non_space_count] = '\0';
    }

}

void checarNome(char **listaConvidados, char *nome) {
    //transformar tudo em minusculo para na comparação não ocorrer erro (maiusculo e minusculo são diferentes na tabela ASCII)
    int mark;
    for (int m=0 ; m<MAX_NAMES ; m++) {
        for (int n=0 ; n<strlen(listaConvidados[m]) ; n++) {
            listaConvidados[m][n] = tolower(listaConvidados[m][n]);
        }
    }
    //transformar em minusculo para na comparação não ocorrer erro
    for (int a=0 ; a<strlen(nome) ; a++) {
        nome[a] = tolower(nome[a]);
    }
    //remove espaços dos nomes
    removeSpacesFromStr(listaConvidados, nome);
    
    //compara a lista com o nome, se tiver na lista retorna 0, se não retorna -1
    for (int i=0 ; i<MAX_NAMES ; i++) {
        int c=0;
        
        mark = strcmp(nome, listaConvidados[i]);
        
        if (mark == 0) printf("%d", mark);

    }
}