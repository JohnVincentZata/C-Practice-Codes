#include <stdio.h>

int main()
{
    int sum=0;
    for(int i=1; i<=10; i++)
    {
        printf("%d ",i); /// print natural numbers from 1 to 10
        sum+=i; ///sum = sum + i
    }
    printf("\nThe sum is %d", sum); ///print the sum of integers
    return 0;
}
