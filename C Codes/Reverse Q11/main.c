#include <stdio.h>

int main() {
    int num, count = 0, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    int n = num;
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        count++;
    }
    while (num != 0) {
        int digit = num%10;
 rev = rev*10 + digit;
 num = num/10;
    }

    printf("Number of digits : %d\n", count);
    printf("%d in reversed form is : %d\n", n, rev);

    return 0;
}
