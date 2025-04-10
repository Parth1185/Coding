#include <stdio.h>
int main() {
    int n, temp, digit, sum = 0;
    int count = 0;
    printf("Enter a number : ");
    scanf("%d", &n);
    temp = n;
    while (temp != 0) {
        temp = temp/ 10;
        count+=1;   }
    temp = n;
    while (temp != 0) {
        digit = temp % 10;

        int power = 1;
        for (int i = 0; i < count; i++) {
            power *= digit; }
        sum += power;
        temp /= 10;     }

    if (sum == n) {
        printf("%d is an Armstrong Number\n", n);}
         else {
        printf("%d is not an Armstrong Number\n", n);   }


return 0;

}
