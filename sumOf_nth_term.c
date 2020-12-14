#include <stdio.h>

int main()
{
    int sum=0, n;
    printf("Enter the nth term: ");
    scanf("%d", &n);
    for(int i = 1; i <=n; i++)
    {
        printf("%d ", i);
        sum+=i;
    }
    printf("\nThe sum of natural numbers up to %d is %d", n, sum);
    return 0;
}
