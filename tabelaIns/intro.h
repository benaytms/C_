#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define k 9

typedef struct {
        char key;
        int info;
}TABELA;

// ordena as keys
void insercao1(TABELA table[]);

// ordena os registros
void insercao2(TABELA table[]);

// ordena ambos
void insercao3(TABELA table[]);

// printa a tabela
void printTable(TABELA table[]);
