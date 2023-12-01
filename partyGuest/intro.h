#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<time.h>
#include<ctype.h>

#define MAX_NAMES 5
#define MAX_NAME_LENGTH 30

// função para printar string
void print_str(int v, char *n);

// liberar memoria
void liberaMem(char *n, char *m);

// remover espaços de string
void removeSpacesFromStr(char **string, char *nome);

// checa se o nome está na lista de convidados
void checarNome(char **listaConvidados, char *nome);
