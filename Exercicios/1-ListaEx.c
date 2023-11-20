#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "SortAlg.c"
#include <time.h>
const double PI = 3.1415926;

//achar raiz quad de n utilizando soma de impares
/*int main(){
    int n, i, aux = 0;
    scanf("%d", &n);
    for (i=1;i<n*2;i++){
        aux += i;
        i+=1;
    }
    printf("n^2 = %d", aux);
}

//montar um "xadrez" de O's, primeiro num de colunas dps linhas
/*int main(){
    int lin, col, n, m;
    scanf("%d", &n);
    scanf("%d", &m);

    for(lin=1; lin<=m;lin++){
        printf("\n");
        for(col=1;col<=n;col++){
            printf("O");
        }
    }
}*/

//procurar a posição do valor x em um array aleatorio; se não houver não mostrara nada
/*void printVector(int *v, int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", v[i]);
    printf("\n");
    return;
}
int main(){
    int n, *v, x;
    srand(time(NULL));
    scanf("%d %d", &n, &x);
    v = malloc(n * sizeof(int));
    for(int i = 0; i<n; i++){
        v[i] = rand() % 10;
    }
    printVector(v, n);
    insertionSort(v, n);
    printVector(v, n);
    printf("Index: ");
    binarySearch(v, 0, n, x);
    return 0;
}*/
