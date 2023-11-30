#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define k 9

typedef struct {
    char key;
    int info;
}TABELA;

void insercao1(TABELA table[]);

void insercao2(TABELA table[]);

void insercao3(TABELA table[]);

void printTable(TABELA table[]);
