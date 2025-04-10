#include <stdio.h>
int fact(int x)
{
    if (x==0)
    {
        return 1;
    }
    else
    {
        return x* fact(x-1);
    }
}
int main()
{
    int p;
    printf("Enter a number : ");
    scanf("%d", &p);
    fact(p);
    printf("The factorial of %d is %d", p, fact(p));

}
