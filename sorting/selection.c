#include <stdio.h>
#define MAX 100

void swap(int *x, int *y){
    int z = *x;
    *x = *y;
    *y = z;
}

void printArray(int A[], int n){
    int i;
    for (i=0; i<n; i++)
        printf("%d ", A[i]);
    printf("\n");
}

void selectionSort(int A[], int n){
    int i, j, min;

    for (i=0; i<n-1; i++){
        min = i;
        for (j=i+1; j<n; j++)
          if (A[j] < A[min]) min = j;

        swap(&A[min], &A[i]);
    }
}

int main(){
    int A[MAX], n, i, s;

    printf("Enter Number of Elements: ");
    scanf("%d", &n);

    printf("Enter %d Elements:\n", n);
    for(i=0; i<n; i++)
        scanf("%d", &A[i]);

    selectionSort(A, n);

    printArray(A, n);

    return 0;
}
