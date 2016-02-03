#include <stdio.h>
#define MAX 100

void printArray(int A[], int n){
    int i;
    for (i=0; i<n; i++)
        printf("%d ", A[i]);
    printf("\n");
}

void insertionSort(int A[], int n){
   int i, j, k;
   for (i=1; i<n; i++){
       k = A[i];
       j = i-1;

       while (j >= 0 && A[j] > k){
           A[j+1] = A[j];
           j = j-1;
       }
       A[j+1] = k;
   }
}

int main(){
    int A[MAX], n, i, s;

    printf("Enter Number of Elements: ");
    scanf("%d", &n);

    printf("Enter %d Elements:\n", n);
    for(i=0; i<n; i++)
        scanf("%d", &A[i]);

    insertionSort(A, n);

    printArray(A, n);

    return 0;
}
