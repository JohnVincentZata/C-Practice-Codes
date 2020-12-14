#include <stdio.h>

int main()
{
    int sum=0, n;
    float average=0.0;
    printf("Input a 10 numbers: \n");
    for(int i=1; i<=10; i++)
    {
        printf("Number-%d: ", i); ///gets the 10 inputted numbers
        scanf("%d",&n);
        sum+=n; /// sum = sum + n
    }
    average = sum/10.0; /// formula to get average of 10 num
    printf("The sum of 10 numbers is %d\n", sum);
    printf("The average is %f", average);
    return 0;
}
