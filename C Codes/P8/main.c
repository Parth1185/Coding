#include <stdio.h>
int main ()
{
    char ch;
    int b;
    printf("Enter your alphabet : ");
    scanf("%c", &ch);
    ch =tolower(ch);
    switch(ch)

    {

        case 'a': case 'e': case 'i': case 'o': case 'u':

        printf("Vowel\n");
        break;

        default:

            {
                b =  ('a' <= ch && ch<='z');
                switch (b)
            {
                case 0:
                    printf("It is an invalid input\n");
                    break;
                case 1:
                    printf("Consonant\n");
                    break;
                }
            }
    }

    int num;
    printf("Enter your Number : ");
    scanf("%d", &num);
    switch (num > 0) {
        case 1:
            printf("%d is positive. \n ", num);
            break;
        case 0:
            switch (num < 0) {
                case 1:
                    printf("%d is negative.\n", num);
                    break;
                case 0:
                    printf("%d is zero.\n", num);
                    break;
            }
            break;
    }

    return 0;
}

