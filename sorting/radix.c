#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100
#define max(x, y) (x > y) ? x : y

void printArray(int A[], int n){
    int i;
    for (i=0; i<n; i++)
        printf("%d ", A[i]);
    printf("\n");
}

void countingSort(int A[], int n, int exp){
    int i, COUNT[10] = {0};
    int *OUT = malloc( n * sizeof(int) );

    for (i=0; i<n; i++) COUNT[ (A[i]/exp)%10 ]++;

    for (i=1; i<10; i++) COUNT[i] += COUNT[i-1];

    for (i=n-1; i>=0; i--) OUT[ --COUNT[ (A[i]/exp)%10 ] ] = A[i];

    for (i=0; i<n; i++) A[i] = OUT[i];
}

void radixSort(int A[], int n, int Max){
    int e;
    for (e=1; Max/e>0; e*=10) countingSort(A, n, e);
}

int main(){
    int A[MAX], n, i, Max = -1;

    printf("Enter Number of Elements: ");
    scanf("%d", &n);

    printf("Enter %d Elements(>=0):\n", n);
    for(i=0; i<n; i++){
        scanf("%d", &A[i]);
        Max = max(Max, A[i]);
    }

    radixSort(A, n, Max);

    printArray(A, n);

    return 0;
}
