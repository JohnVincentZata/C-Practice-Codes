#include <stdio.h>

int main()
{
    int rows=4, k = 1;
    for(int i=1; i<=rows; i++)
    {
        for(int j =1; j<=i; j++)
        {
            printf("%d ",k++);
        }
        printf("\n");
    }
}
