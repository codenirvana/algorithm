#include <stdio.h>
#define MAX 100

int main() {
    int A[MAX], n, i, s;

    printf("Enter Number of Elements: ");
    scanf("%d", &n);

    printf("Enter %d Elements:\n", n);
    for(i=0; i<n; i++)
        scanf("%d", &A[i]);

    printf("Enter Element to Search: ");
    scanf("%d", &s);

    for(i=0; i<n; i++){
        if( A[i] == s )
            break;
    }

    if( i < n )
        printf("%d found at index %d\n", s, i+1);
    else
        printf("%d not found\n", s);

    return 0;
}
