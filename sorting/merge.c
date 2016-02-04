#include <stdio.h>
#define MAX 100

void merge(int A[], int l, int m, int r){
    int i, j, k, x, y;
    x = m - l + 1;
    y = r - m;
    int A1[x], A2[y];

    for(i=0; i<x; i++)
        A1[i] = A[l+i];
    for(i=0; i<y; i++)
        A2[i] = A[m+i+1];

    i=0; j=0; k=l;
    while(i<x && j<y){
        if(A1[i] <= A2[j]){
            A[k] = A1[i];
            i++;
        } else{
            A[k] = A2[j];
            j++;
        }
        k++;
    }

    while(i<x){
        A[k] = A1[i];
        i++;
        k++;
    }

    while(j<y){
        A[k] = A2[j];
        j++;
        k++;
    }

}

void mergeSort(int A[], int l, int r){
    int m;
    if( l < r ){
        m = ( l + r ) / 2;
        mergeSort(A, l, m);
        mergeSort(A, m+1, r);
        merge(A, l, m, r);
    }
}

void printArray(int A[], int n){
    int i;
    for (i=0; i<n; i++)
        printf("%d ", A[i]);
    printf("\n");
}

int main(){
    int A[MAX], n, i, s;

    printf("Enter Number of Elements: ");
    scanf("%d", &n);

    printf("Enter %d Elements:\n", n);
    for(i=0; i<n; i++)
        scanf("%d", &A[i]);

    mergeSort(A, 0, n-1);

    printArray(A, n);

    return 0;
}
