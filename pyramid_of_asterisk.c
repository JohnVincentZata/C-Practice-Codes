#include <stdio.h>
///pyramid of asterisk
void main()
{
    int rows=4, t=1, spc=5; ///space to make pyramid
    for(int i = 1; i <= rows; i++) ///1st loop for rows
    {
        for(int j = spc; j>=1; j--)
        {
            printf(" ");
        }
        for(int k = 1; k<=i ; k++)
        {
            printf("* "); ///print the * until k == i
        }
        printf("\n");
        spc--; ///decrement so every loop the spaces is -1
    }
    return 0;
}
