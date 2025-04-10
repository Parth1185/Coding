#include<stdio.h>

typedef union fruit
{
    int dozen;
    double kg;
}Fruit;

int main() {
    Fruit f1;
    f1.dozen = 6;
    printf("%d %d %.1lf \n", sizeof(f1), f1.dozen,f1.kg);

    f1.kg=9.5;
    printf("%d %d %lf", sizeof(f1), f1.dozen,f1.kg);
    return 0;
}