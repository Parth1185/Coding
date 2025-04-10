#include <stdio.h>
#include <stdlib.h>

int main()
/*{
    int a,b, temp;
    printf("Enter First Number : ");
    scanf("%d", &a);
    printf("Enter Second Number : ");
    scanf("%d", &b);
    temp = b;
    b = a;
    a = temp;
    printf("The Swapped Numbers are : %d , %d ", a , b );
    return 0;
}
This was with using temporary variable */
{
    int a,b;
    printf("Enter First Number : ");
    scanf("%d", &a);
    printf("Enter Second Number : ");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("The Swapped Numbers are : %d , %d ", a , b );
    return 0;
}
/* Without using temporary variable*/
