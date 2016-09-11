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

void countingSort(int A[], int n, int maxElement){
    int i, j, x = 0, count_size = maxElement + 1;

    int *COUNT = malloc( count_size * sizeof(int) );
    memset(COUNT, 0, count_size);

    for (i=0; i<n; i++) COUNT[A[i]]++;

    for(i=0; i<count_size; i++)
        for(j=0; j<COUNT[i]; j++) A[x++] = i;
}

int main(){
    int A[MAX], n, i, s, maxElement = -1;

    printf("Enter Number of Elements: ");
    scanf("%d", &n);

    printf("Enter %d Elements(>=0):\n", n);
    for(i=0; i<n; i++){
        scanf("%d", &A[i]);
        maxElement = max(maxElement, A[i]);
    }

    countingSort(A, n, maxElement);

    printArray(A, n);

    return 0;
}
