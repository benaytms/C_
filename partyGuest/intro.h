#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_NAMES 5
#define MAX_NAME_LENGTH 30

// printa string
void print_str(int v, char *n);

// remove os espaços das string
void removeSpacesFromStr(char **string, char *nome);

// checa se o nome está na lista de convidados
void checarNome(char **listaConvidados, char *nome);
