#include<stdio.h>

enum level
{
    low, med, high
};


enum Day
{
    Monday = 1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday
};

// int main()
// {
//     enum level l;
//     l = med;
//     printf("%d",l);
//     return 0;
// }



// int main()
// {
//     enum level l;
//     int k;
//     printf("Enter input: ");
//     scanf("%d", &k);
//     switch (k)
//     {
//         case low:
//             printf("low\n");
//             break;

//         case med:
//         printf("medium\n");
//         break;

//         case high:
//         printf("high\n");
//         break;
//     }
// }

int main()
{
    int d;

    Day day;
    day = Wednesday;
    printf("%d\n", day);


    printf("Enter Day of Week : ");
    scanf("%d", &d);

    switch(d)
    {
        case Monday:
        printf("%d : Monday", d);
        break;

        case Tuesday:
        printf("%d : Tuesday", d);
        break;

        case Wednesday:
        printf("%d : Wednesday", d);
        break;

        case Sunday:
        printf("%d : Sunday", d);
        break;

        case Thursday:
        printf("%d : Thursday", d);
        break;

        case Friday:
        printf("%d : Friday", d);
        break;

        case Saturday:
        printf("%d : Saturday", d);
        break;
        
        default:
        printf("Enter a value between 1-7. ");
    }

    return 0;
}