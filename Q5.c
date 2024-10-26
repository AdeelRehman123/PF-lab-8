#include <stdio.h>
int main() 
{
    int n,gape,i,j;
    printf("Enter the number of rows for the upper half: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        
        for ( gape = 1; gape <= n - i; gape++) {
            printf(" ");
        }
        
        for ( j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    for ( i = n - 1; i >= 1; i--) {
        
        for ( gape = 1; gape <= n - i; gape++) {
            printf(" ");
        }
        
        for ( j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
