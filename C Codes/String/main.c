/*#include<stdio.h>
void main()
{
    char str1[10];
    int i=0, count=0;
    printf("Enter a string : ");
    gets(str1);
    printf("The entered string is : %s\n", str1);
    while(str1[i] != '\0')
    {
        count ++;
        i++;
    }
    printf("Length of string : %d" , count);
}
#include<stdio.h>
#include<string.h>
void main()
{
    char str1[25], str2[25];
    int i=0, count =0, len;
    printf("Enter a string : ");
    gets(str1);
    printf("%s\n", str1);
    while(str1[i] != '\0')
    {
        str2[i]=str1[i];
        i++;
    }
    str2[i]='\0';
    printf("Main String : %s\n" , str1);
    printf("Copied String : %s\n" , str2);
    printf("Length : %d", i);
}*/


#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    int i = 0, len = 0;

    printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin);

    // Remove the newline character if present
   // str1[strcspn(str1, "\n")] = '\0';

    len = strlen(str1);

    printf("Original string: %s\n", str1);
    for (i = 0; i < len / 2; i++) {
        char temp = str1[i];
        str1[i] = str1[len - i - 1];
        str1[len - i - 1] = temp;
    }

    printf("Reversed string: %s\n", str1);

    return 0;
}
