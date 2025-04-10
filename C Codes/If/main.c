#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i1,i2,i3,i4;
    scanf("%d%d%d%d", &i1,&i2,&i3,&i4);

    if (i1>=3 && i1<=5){
        printf("Accepted");
    }
    else if (i2>=3 && i2<=5){
        printf("Accepted");
    }
    else if (i3>=3 && i3<=5)
    {
        printf("Accepted");
    }

    else if (i4>=3 && i4<=5)
    {
     printf("Accepted");
    }
    else {
        printf(" Not Accepted");

    }
    return 0;
}

