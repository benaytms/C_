#include "Sorting.h"

void printArray(int array[], int n) {
  for (int i = 0; i < n; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

int linearSearch(int array[], int n, int x){
    for (int i=0 ; i<n ; i++) if (x == array[i]) return i;
    return -1;
}

int binarySearch(int array[], int n, int x){
    int i, f, m;
    i = 0;
    f = n-1;
    while (i<=f) {
        m = (f+i)/2;
        if (x == array[m]) return m;
        else if (x > array[m]) i = m+1;
        else if (x < array[m]) f = m-1;
    }
    return -1;
}

void swap(int *a, int *b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

void bubbleSort(int array[], int size) {
    for (int j=0; j<size-1 ; j++) {
        for (int i=0; i<size-j-1 ; i++) {
            if (array[i] > array[i+1]){
                swap(&array[i], &array[i+1]);
            }
        }
    }
}

void insertionSort(int array[], int size) {
    for (int k=1 ; k<size ; k++) {
        int key = array[k];
        int j = k - 1;
        while (key < array[j] && j>=0) {
          array[j+1] = array[j];
          --j;
        }
        array[j+1] = key;
    }
}

void selectionSort(int array[], int size) {
  for (int k=0 ; k < size - 1 ; k++) {
    int min_idx = k;

    for (int i = k + 1 ; i < size ; i++) {
        if (array[i] < array[min_idx])
        min_idx = i;
    }

    swap(&array[min_idx], &array[k]);
  }
}

int partition(int array[], int low, int high) {

    int pivot = array[high];
  
    int i = (low - 1);

  for (int j = low; j < high; j++) {
        if (array[j] <= pivot) {
    
        i++;
      
        swap(&array[i], &array[j]);

        }
    }

    swap(&array[i + 1], &array[high]);
  
    return (i + 1);

}

void quickSort(int array[], int low, int high) {
  if (low < high) {
    
    int pi = partition(array, low, high);
    
    quickSort(array, low, pi - 1);
    
    quickSort(array, pi + 1, high);
  }
}

void merge(int arr[], int p, int q, int r) {

  int n1 = q - p + 1;
  int n2 = r - q;

  int L[n1], M[n2];

  for (int i = 0; i < n1; i++)
    L[i] = arr[p + i];
  for (int j = 0; j < n2; j++)
    M[j] = arr[q + 1 + j];

  int i, j, k;
  i = 0;
  j = 0;
  k = p;

  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }

  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
  }
}

void mergeSort(int arr[], int l, int r) {
  if (l < r) {

    int m = l + (r - l) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

    merge(arr, l, m, r);
    
  }
}





















// testes
int main() {
  int data[] = {20, 12, 10, 15, 2, 6};
  int size = sizeof(data) / sizeof(data[0]);
  printArray(data, size);
  bubbleSort(data, size);
  //insertionSort(data, size);
  //selectionSort(data, size);
  printf("Sorted array:\n");
  printArray(data, size);
}