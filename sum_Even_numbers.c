#include <stdio.h>

int main()
{
    int n, sum=0;
    printf("Input number of terms: ");
    scanf("%d",&n);
    printf("The even numbers are: ");
    for(int i = 1; i<=n; i++)
    {
        printf("%d ", i*2);
        sum += i*2;
    }
    printf("\nThe sum of even natural number upto %d terms : %d", n, sum);
    return 0;
}
