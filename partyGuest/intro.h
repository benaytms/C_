#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<time.h>
#include<ctype.h>

#define MAX_NAMES 5
#define MAX_NAME_LENGTH 30

void print_str(int v, char *n);

void liberaMem(char *n, char *m);

void removeSpacesFromStr(char **string, char *nome);

void checarNome(char **listaConvidados, char *nome);