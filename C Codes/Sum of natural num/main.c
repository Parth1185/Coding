#include <stdio.h>

int main()
{
    int num;
    int sum = 0;
    int i;
    i=1;
    printf("Enter your number : ");
    scanf("%d",&num);
    while (i<=num)
    {
        sum = sum + i;
        i=i+1;
    }
        printf(" Sum of first %d numbers is: %d " , num , sum );

    return 0;
}
