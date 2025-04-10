#include <stdio.h>

int main()
{
    int a = 1000;
    float b = 34.9784;
    double c = 34.9784;

    printf("Number is %12d\n", a);
    // Prints the integer 'a' with a width of 12 characters, right-aligned.

    printf("Second Number is %f\n", b);
    // Prints the float 'b' with default precision (6 decimal places).

    printf("Third Number is %lf\n", c);
    // Prints the double 'c' with default precision (6 decimal places).

    printf("Second Number up to 3 decimal points is %10.3f\n", b);
    // Prints the float 'b' with a width of 10 characters, including 3 decimal places.

    printf("The Memory address of a is : %p\n", (void*)&a);
    // Prints the memory address of 'a'.

    printf("Hexadecimal equivalent is : %x\n", a);
    // Prints the integer 'a' in hexadecimal format (lowercase).

    printf("Hexadecimal equivalent is : %X\n", a);
    // Prints the integer 'a' in hexadecimal format (uppercase).

    printf("Octal equivalent is %o\n", a);
    // Prints the integer 'a' in octal format.

    return 0;
}

/* %12 means value of a will be printed with total 12 digits  and remaining 8 spaces will be printed empty to left side of a
%10.3 means 10 spaces before decimal and 3 spaces after decimal
%p refers to memory location */
