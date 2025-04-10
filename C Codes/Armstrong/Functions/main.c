#include <stdio.h>

/*int add()

{
    int a,b,c;
    printf("Enter 2 numbers : ");
    scanf("%d%d", &a ,&b);
    c= a+b;
}*/


int square(int num)
{
    return (num * num);
}
int main()
{
    int num, n;
	printf("\n Function : Find square of any number :\n");
	printf("--------------\n");

    printf("Input any number for square : ");
    scanf("%d", &num);
    n = square(num);
    printf("The square of %d is : %d\n", num, n);
    return n;
}
