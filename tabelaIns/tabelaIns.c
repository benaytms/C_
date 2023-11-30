#include"tabelaIns.h"


int main (void) {
    TABELA L[k] = {{'C', 2}, {'A', 2}, {'B', 3}, {'C', 1}, {'A', 3}, {'A', 1}, {'C', 3}, {'B', 2}, {'B', 1}};

    printTable(L);

    /*insercao1(L);             // ordena pelas keys
    insercao2(L);               // ordena pelos registro (info)
    insercao3(L);*/             // ordena os dois

    printTable(L);

    return 0;

}

