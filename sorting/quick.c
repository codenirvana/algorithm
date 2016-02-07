#include <stdio.h>
#define MAX 100

void swap(int *x, int *y){
    int z = *x;
    *x = *y;
    *y = z;
}

void printArray(int A[], int n){
    int i;
    for(i=0; i<n; i++)
        printf("%d ", A[i]);
    printf("\n");
}

int partition(int A[], int s, int e){
    int index, piviot, i;
    piviot = A[e];
    index = s;
    for(i=s; i<e; i++){
        if(A[i] <= piviot){
            swap(&A[i], &A[index]);
            index++;
        }
    }
    swap(&A[index], &A[e]);
    return index;
}

void quickSort(int A[], int s, int e){
    int index;
    if(s >= e) return;
    index = partition(A, s, e);
    quickSort(A, s, index-1);
    quickSort(A, index+1, e);
}

int main(){
    int A[MAX], n, i, s;

    printf("Enter Number of Elements: ");
    scanf("%d", &n);

    printf("Enter %d Elements:\n", n);
    for(i=0; i<n; i++)
        scanf("%d", &A[i]);

    quickSort(A, 0, n-1);

    printArray(A, n);

    return 0;
}
