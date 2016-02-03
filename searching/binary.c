#include <stdio.h>
#define MAX 100

int main() {
    int A[MAX], n, i, s, mid, l, r;

    printf("Enter Number of Elements: ");
    scanf("%d", &n);

    printf("Enter %d Elements:\n", n);
    for(i=0; i<n; i++)
        scanf("%d", &A[i]);

    printf("Enter Element to Search: ");
    scanf("%d", &s);

    l = 0; r = n;

    while( l <= r ){
        mid = ( l + r ) / 2;

        if( A[mid] > s )
            r = mid - 1;
        else if( A[mid] < s )
            l = mid + 1;
        else
            break;
    }


    if( l <= r )
        printf("%d found at index %d\n", s, mid+1);
    else
        printf("%d not found\n", s);

    return 0;
}
