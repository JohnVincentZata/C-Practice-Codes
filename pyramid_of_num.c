#include <stdio.h>
///display pyramid of numbers 1 to 10
void main()
{
    int rows=4,t=1;
    int spc=5; ///spaces to make a pyramid
    for(int i = 1; i <=rows; i++)///1st loop is for rows
    {
        for(int j = spc; j >=1; j--)
        {
            printf(" "); ///loop to print spaces
        }
        for(int k = 1; k<=i; k++)
        {
            printf("%d ",t++); ///print the numbers 1 to 10 every loop
        }
        printf("\n");
        spc--; ///decrement so every loop the spaces is -1
    }
    return 0;
}
