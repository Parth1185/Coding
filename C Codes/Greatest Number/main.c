#include <stdio.h>
#include <stdlib.h>

int main()
/*{
    int a,b,c;

    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);
    printf("Enter c : ");
    scanf("%d", &c);
    if (a>b && a>c){
        printf("a is greatest")
        }
    else if (b>c && b>a){
        printf("b is greatest");}
    else {
        printf("c is greatest");}
    return 0;

} This was using If-Else*/

{
    int a,b,c, result;

    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);
    printf("Enter c : ");
    scanf("%d", &c);
    result = (a>b && a>c? a : b>a && b>c? b :  c);
    printf(" The result is %d", result);
    return 0;
}
