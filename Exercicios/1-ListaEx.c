#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "SortAlg.c"
#include <time.h>
const double PI = 3.1415926;


void printVector(int *v, int size) {
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
}
