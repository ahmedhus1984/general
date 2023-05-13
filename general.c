//bubble sort (using iteration) - modify the code above to use bubble sort on the array iteratively.
#include "general_header.h"
#include<stdio.h>

void bubbleSort(int[], int);
void int_swap(int[], int, int);

int main(void){
    int arr[] = { 4, 2, 40, 3, 10 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("before: \n");
    for (int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    bubbleSort(arr, n);
    printf("after: \n");
    for (int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

void bubbleSort(int a[], int size){
  int loop_count=0;
  for(int i=0, swap_count=0; i<size; i++, loop_count++, swap_count=0){
    for(int j=0; j<size-1; j++){
      if(a[j]>a[j+1]){
        int_swap(a, j, j+1);
        swap_count++;
      }
    }
    printf("number of swaps last loop: %d\n", swap_count);
    if(swap_count==0){
      loop_count++;
      break;
    }
    swap_count=0;
  }
  printf("total number of loops taken to sort array: %d\n", loop_count);
}

void int_swap(int a[], int i, int j){
    int container=a[i];
    a[i]=a[j];
    a[j]=container;
}