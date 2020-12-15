#include <stdio.h>

int main()
{
    int n, sum=0;
    printf("Input number of terms : ");
    scanf("%d",&n);
    for(int i = 1; i <=n; i++)
    {
        printf("%d ",i*2-1);
        sum+=i*2-1;
    }
    printf("\nThe sum of odd natural numbers upto 10 terms : %d", sum);
    return 0;
}
