#include <stdio.h>

int main()
{
    int n;
    printf("Input numbers of terms: "); ///get how many nth terms
    scanf("%d", &n);
    for(int i = 1; i<=n; i++ )
    {
        printf("Number is : %d and cube of the %d is : %d\n", i, i, (i*i*i)); /// to get the cube is we need to multiply itself by 3
    }
    return 0;
}
