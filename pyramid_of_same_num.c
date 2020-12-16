#include <stdio.h>

int main()
{
    int spc=5, rows=4;
    for(int i = 1; i <= rows; i++)
    {
        for(int j=spc; j>=1; j--)
        {
            printf(" ");
        }
        for(int k = 1; k<=i; k++)
        {
            printf("%d ", i);
        }
        printf("\n");
        spc--;
    }
    return 0;
}
