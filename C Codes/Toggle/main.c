#include <stdio.h>
#include <string.h>
void main()
{
    char s1[]= "PiNeApPlE";
    int i = 0;
    while(s1[i] != '\0')
    {
        if(s1[i]>=65 && s1[i]<=90)
        {
            s1[i]+=32;
        }
        else if(s1[i]>=97 && s1[i]<=122)
        {
            s1[i]-=32;
        }
        i++;
    }
    for (i=0; s1[i]!='\0'; i++)
    {
        printf("%c", s1[i]);
    }
    printf("\n");
{

    char s1[]= "Mveijbob";
    for(int i = 0; s1[i]!='\0'; i++)
    {
        s1[i] -= 1;
        printf("%c", s1[i]);

    }
    /*for (int i=0; s1[i]!='\0'; i++)
    {
        printf("%c", s1[i]);
    }*/
}
    printf("\n");


    char str[100];
    char str1[100];
    int m = 0;
    int n = 0;
    printf("Enter a string: ");
    gets(str);
    while (str[m] != '\0') {
        if ((int)str[m] != 32) {
            str1[n] = str[m];
            n++;
        }
        m++;
    }
    str1[n] = '\0';

    printf("String without spaces: %s\n",str1);
    return 0;
}
