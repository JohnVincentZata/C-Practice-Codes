#include <stdio.h>

void main()
{
    int n, fact=1;
    printf("Input number of terms: ");
    scanf("%d",&n);
    for(int i = 1; i<=n; i++)
    {
        fact=fact * i;
    }
    printf("The factorial of %d! is %d.", n, fact);
    return 0;
}
