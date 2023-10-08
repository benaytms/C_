#include <stdio.h>
#include <stdlib.h>

int linearSearch(int *v, int inicio, int fim, int x){
    for (int i=inicio; i<fim-1; i++){
        if (v[i] == x) {
            printf("%d ", i);
        }
    }
}

int binarySearch(int *arr, int inicio, int fim, int x){
    if (fim >= inicio){
        int mid = (inicio+fim)/2;

        if (arr[mid] == x){
            return linearSearch(arr, inicio, fim, x);
        }
        else if(arr[mid] > x){
            return binarySearch(arr, inicio, mid-1, x);
        }
        else{
            return binarySearch(arr, mid+1, fim, x);
        }
    }
    else {
        return -1;
    }
}
