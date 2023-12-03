#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int linearSearch(int array[], int n, int x);
//busca Linear (valor por valor)

int binarySearch(int array[], int n, int x);
//busca Binaria (divide o array até encontrar X)

void swap(int *a, int *b);
//trocar as posições de a e b

void insertionSort(int array[], int size);
//ordena pequenos subarrays dentro do array principal, até todos estarem ordenados
//logo o array principal também estará ordenado

void selectionSort(int array[], int size);
//encontra o menor valor possivel e o traz para frente, colocando todos os valores
//em seus devidos lugares 1 por 1

void bubbleSort(int array[], int size);
//seleciona pares de algarismos e os compara 
//fazendo trocas de posições para ordenar o array

void quickSort(int array[], int i, int j);
void partition(int array[], int a, int b);
//seleciona um pivo e a partir dele ordena seus dois lados
//colocando todos os valores menores que o pivo à esquerda, e todos os maiores à direita
//em seguida escolhe outros pivos e repete o processo até estar tudo ordenado

void mergeSort(int array[], int i, int j);
void merge(int array[], int i, int j, int m);
//divide o array até os valores ficarem sozinhos
//depois com a func merge os junta ordenadamente no array principal
