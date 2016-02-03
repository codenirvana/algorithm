#include <stdio.h>
#define MAX 100

int linearSearch(int A[], int s, int i, int n){
    if( i == n )
        return -1;

    if( A[i] == s )
        return i;

    return linearSearch(A, s, ++i, n);
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

    i = linearSearch(A, s, 0, n) ;

    if( i != -1 )
        printf("%d found at index %d\n", s, i+1);
    else
        printf("%d not found\n", s);

    return 0;
}
