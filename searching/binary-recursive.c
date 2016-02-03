#include <stdio.h>
#define MAX 100

int binarySearch(int A[], int s, int l, int r){
    int mid;

    if ( l <= r ){
        mid = ( l + r ) / 2;

        if( A[mid] > s )
            return binarySearch(A, s, l, mid-1);
        else if( A[mid] < s )
            return binarySearch(A, s, mid+1, r);
        else
            return mid;
    }

    return -1;
}

int main() {
    int A[MAX], n, i, s;

    printf("Enter Number of Elements: ");
    scanf("%d", &n);

    printf("Enter %d Elements:\n", n);
    for(i=0; i<n; i++)
        scanf("%d", &A[i]);

    printf("Enter Element to Search: ");
    scanf("%d", &s);

    i = binarySearch(A, s, 0, n);

    if( i != -1 )
        printf("%d found at index %d\n", s, i+1);
    else
        printf("%d not found\n", s);

    return 0;
}
