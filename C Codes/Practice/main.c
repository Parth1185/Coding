#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Paste the text sent by Parth: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') { // Check if character is uppercase letter
            str[i] -= 1;
            if (str[i] < 'A')
                str[i] = 'Z';
        }
        else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 1;
            if (str[i] < 'a')
                str[i] = 'z';
        }
    }

    printf("A secret message for you : %s", str);
    return 0;
}
