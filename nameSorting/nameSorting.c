#include"intro.h"

/*
ordenar um registro-agenda utilizando selection sort

e usando a chave (nome) para ordenar - para isso, uso os valores ASCII das letras*/

typedef struct {

    char nome[40];
    char fone[20];
    int ascVal;

} PESSOA;

void agendaFilling (PESSOA agenda[], int *valorASCII, int n) {

    for (int k=0 ; k<n ; k++) {

        fgets(agenda[k].nome, sizeof(agenda[k].nome), stdin);
        fgets(agenda[k].fone, sizeof(agenda[k].fone), stdin);
        valorASCII[k] = 0;
        //remover quebra de linha dos nomes
        agenda[k].nome[strlen(agenda[k].nome)-1] = '\0';
        agenda[k].fone[strlen(agenda[k].fone)-1] = '\0';

        int aux=0;
        //calcular valor ASCII
        for (int l=0 ; l<strlen(agenda[k].nome) ; l++) {
            aux = agenda[k].nome[l];
            valorASCII[k] = valorASCII[k] + aux;
        }
        agenda[k].ascVal = valorASCII[k];

    }

}
//tira os espaços dos nomes - não foi necessario usar mas vou deixar aqui pq eu quero
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
//ordena os nomes alfabeticamente - nomes iguais não ficam ordenados
//leva em consideração a primeira letra dos nomes
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

int main () {

    //quantidade de pessoas para colocar na agenda
    int n;
    scanf("%d", &n);
    printf("%d\n", n);

    PESSOA agenda[n];
    int valAC[n];
    getchar();

    //preenchimento da agenda e calculo do valor ASCII
    agendaFilling(agenda, valAC, n);

    //selection sort improvisado para ordenar os valores ASCII - também não necessario
    /*for (int a=0 ; a < n - 1 ; a++) {
        int min_idx = a;
        for (int i = a + 1 ; i < n ; i++) {
            if (agenda[i].ascVal < agenda[min_idx].ascVal)
            min_idx = i;
        }
        PESSOA aux = agenda[a];
        agenda[a] = agenda[min_idx];
        agenda[min_idx] = aux;
    }*/

    //stringJunta(agenda, n);
    agendaSorting(agenda, n);


    for (int j=0 ; j<n ; j++) {

        printf("\n%s  %s  [%d]", agenda[j].nome, agenda[j].fone, agenda[j].ascVal);

    }
    return 0;
}
