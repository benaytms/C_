#include "partyGuests.h"
/*. Dado a lista de convidados de uma festa15 e o nome de uma
pessoa, determinar se essa pessoa é ou não convidada da festa. Codifique um
programa completo para resolver esse problema. Crie um procedimento para
fazer a entrada da lista de convidados e verifique se o nome consta ou não da lista. */

int main() {
        char string[MAX_NAMES][MAX_NAME_LENGTH];
        char **string2 = (char**) malloc(MAX_NAMES * sizeof(char));

        for (int l=0 ; l<MAX_NAMES ; l++) {
            gets(string[l]);
            string2[l] = (char*) malloc(strlen(string[l]) * sizeof(char));
            string2[l] = string[l];
        }
    printf("\nLista de Convidados: \n");
        for (int i=0 ; i<MAX_NAMES ; i++) {
            printf("%s \n", string2[i]);
        }
    
    char aux[MAX_NAME_LENGTH];
    printf("\nSeu nome: ");
    gets(aux);
    char *nome = (char*) malloc(strlen(aux) * sizeof(char));
    nome = aux;

    checarNome(string2, nome);

    free(nome);
    free(string2);
    nome = 0;
    string2 = 0;

}
