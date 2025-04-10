#include <stdio.h>
void main()
 {
    int a, *p;
    p = &a;
    a=8;
    printf("%d\n", *p);
    *p = 22;
    printf("%d\n",*p);
    printf("%d\n",a);
    a=50;
    printf("%d\n",*p);
    printf("%d\n",a);
 }


 /*
    int a, *p;
    p = &a;
    a=8
    printf("%d\n", *p);

    // Now increase value of a to 15 //

    printf("%d\n",*p+7);
    printf("%d\n",a);
    a=50;
    printf("%d\n",*p);
    printf("%d\n",a);
}

{
    int a,*p,*q;
    q=p=&a;
    a=8;
    printf("%d\n",*p);
    *p=22;
    printf("%d\n",*q);
    *p+=3;
    printf("%d\n",a);
}
{
    int a,b,*p,*q;
    p=&a;
    q=&b;
    printf("Enter a and b : ");
    scanf(" %d %d", &a, &b);
    printf("Sum = %d", *p+*q);
}*/
/*
#include<stdio.h>
void fn(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void main()
{
    int a,b;
    printf("Enter 2 values : ");
    scanf("%d%d", &a,&b);
    fn(&a,&b);
    printf("a = %d , b = %d",a,b);
}
    //THIS WAS CALL BY REFERENCE
*/
