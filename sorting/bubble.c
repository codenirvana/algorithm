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

void bubbleSort(int A[], int n){
   int i, j;
   for (i=0; i<n-1; i++)
       for (j=0; j<n-i-1; j++)
           if (A[j] > A[j+1]) swap(&A[j], &A[j+1]);
}

int main(){
    int A[MAX], n, i, s;

    printf("Enter Number of Elements: ");
    scanf("%d", &n);

    printf("Enter %d Elements:\n", n);
    for(i=0; i<n; i++)
        scanf("%d", &A[i]);

    bubbleSort(A, n);

    printArray(A, n);

    return 0;
}
