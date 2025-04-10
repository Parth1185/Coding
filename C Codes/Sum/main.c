#include <stdio.h>
int main()
{
    int x, y, sum;
    printf(" Enter Numbers : \n");
    scanf("%d%d", &x, &y); //% refers to format specifier and & refers to location/position

    sum = x + y;
    printf("Sum : %d\n", sum);


    int a=20, b= 30, c=10;
    printf("The numbers are %d, %d, %d ", a,b,c);
    return 0;
}


/*getch: get character
getche: it will also show the character , e means echo
getchar: requires enter key to be pressed */
