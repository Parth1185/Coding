
//copy
#include <stdio.h>
#include <string.h>
int main() {
    char str1[20];
    char str2[20];
    char str3[20];
    int i = 0;
    gets(str1);
    while (str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';
    printf("main string: %s\n", str1);
    printf("copied string: %s\n", str2);

    char str[15];
    puts("Enter a string: ");
    gets(str);


    // size

    int size = 0;
    int k=0;
    int u=1;
    while(str[k] != '\0'){
        size++;
        k++;
    }
    printf("Size : %d \n", size);
        // reversing
    for(int i=0, j=size-u; i<=j; i++, u++){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    puts("The reverse is: ");
    puts(str);

    char str5[50] = "Hello ";
    char str4[] = "World";
    char result[100];

    int l, m;
    for(l=0; str5[i] != '\0'; l++) {
        result[l] = str5[l];
    }
    for(m=0; str4[m] != '\0'; m++) {
        result[l+m] = str4[m];
    }
    result[l+m] = '\0';
    printf("Concatenated string: %s\n", result);
    return 0;
}

