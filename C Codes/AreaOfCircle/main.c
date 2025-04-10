#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,a,c ;
    printf("Enter the radius of circle: ");
    scanf("%d",&r);
    c = 2*22*r/7;
    a=22*r*r/7;
    printf("Circumference of the Circle is : %d \n", c);
    printf("Area of The Circle is : %d\n", a);
    return 0;
}
