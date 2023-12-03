#include"nameSorting.h"

int main (void) {
    int n;
    scanf("%d", &n);

    PESSOA agenda[n];
        int valAC[n];
    
    getchar();

    agendaFilling(agenda, valAC, n);
    agendaSorting(agenda, n);
    printArray(agenda, n);

    return 0;
}
