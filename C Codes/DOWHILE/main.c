#include<stdio.h>
void main()
{
    int ch, count = 1;
    //printf("Enter 1 if you want to continue the loop: ");
    //scanf("%d", &ch);
    while(1)
    {
        printf("%d\n", count);
        count++;
        printf("Enter 2 to continue and 4 to break the loop : ");
        scanf("%d", &ch);
        if (ch==2)
        {
            printf("You choose to Continue\n");
            continue;
            printf("Remaining Section");
        }
        if (ch==4)
        {
            printf("You entered to break");
            break;
        }
        else {
            printf("Enter any other number to continue\n");
        }
    }

}
/*
{
    int ch, count = 1;
    do {
        printf("%d\n", count);
        count++;
        printf("Enter 1 if you want to continue the loop: ");
        scanf("%d", &ch);
    }
    while (ch==1);
}
*/
