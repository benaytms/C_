#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<string.h>
#include<time.h>
#include<ctype.h>

//    ordenar um registro-agenda utilizando selection sort
//    e usando o nome como chave para ordenar - para isso usa-se os valores ASCII das letras

typedef struct {
        char nome[40];
        char fone[20];
        int ascVal;
} PESSOA;

// preenche a agenda com os nomes e telefones
void agendaFilling (PESSOA agenda[], int *valorASCII, int n);

void stringJunta (PESSOA agenda[], int n);

void agendaSorting(PESSOA agenda[], int n);

void printArray(PESSOA agenda[], int n);
