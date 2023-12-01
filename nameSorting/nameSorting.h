#include"intro.h"

void agendaFilling (PESSOA agenda[], int *valorASCII, int n) {
        for (int k=0 ; k<n ; k++) {
                fgets(agenda[k].nome, sizeof(agenda[k].nome), stdin);
                fgets(agenda[k].fone, sizeof(agenda[k].fone), stdin);

                    valorASCII[k] = 0;

                agenda[k].nome[strlen(agenda[k].nome)-1] = '\0';
                agenda[k].fone[strlen(agenda[k].fone)-1] = '\0';

                    int aux=0;

            for (int l=0 ; l<strlen(agenda[k].nome) ; l++) {
                    aux = agenda[k].nome[l];
                    valorASCII[k] = valorASCII[k] + aux;
            }
            agenda[k].ascVal = valorASCII[k];
        }
}

void stringJunta (PESSOA agenda[], int n) {
        for (int i=0 ; i<n ; i++) {

        for (int j=0 ; j<strlen(agenda[i].nome) ; j++) {

                int a = j;

                if (agenda[i].nome[a] == ' ') {
                        while (agenda[i].nome[a] != '\0') {
                            agenda[i].nome[a] = agenda[i].nome[a+1];
                            a++;
                }
            }
        }
    }
}

void agendaSorting(PESSOA agenda[], int n) {
        for (int a=0 ; a < n - 1 ; a++) {
                int min_idx = a;
                int k = 0;
        for (int i = a + 1 ; i < n ; i++) {
                if (agenda[i].nome[k] < agenda[min_idx].nome[k])
                min_idx = i;
        }
        PESSOA aux = agenda[a];
        agenda[a] = agenda[min_idx];
        agenda[min_idx] = aux;
    }
}

void printArray(PESSOA agenda[], int n) {
        for(int j=0 ; j<n ; j++) {  
                printf("\n%s  %s  [%d]", 
                agenda[j].nome, agenda[j].fone, agenda[j].ascVal); 
        }
}