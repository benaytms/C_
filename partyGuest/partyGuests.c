#include "partyGuests.h"

/* Dada uma lista de convidados (definida por MAX_NAMES e MAX_NAME_LENGTH em intro.h) de uma festa, 
determinar se uma pessoa aleatoria é ou não convidada da festa. 

Enunciado:
Crie um código para fazer a entrada de um nome numa lista de convidados de uma festa e verifique se o nome consta ou não na lista. 
Em caso de sucesso retorne 0, do contrario retorne -1 */

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
    nome = NULL;
    string2 = NULL;

}
