/*#include <stdio.h>
#include <math.h>
struct Point {
    int x;
    int y;
} p[2];

int main() {
    int i;
    for (i = 0; i < 2; i++)
    {
        printf("Enter x,y for point p%d: ", i);
        scanf("%d %d", &p[i].x, &p[i].y);
    }
    int dx = p[1].x - p[0].x;
    int dy = p[1].y - p[0].y;
    double distance = sqrt(dx * dx + dy * dy);
    printf("Distance between p0 and p1: %.2f\n", distance);

    return 0;
}
*/

/*
#include <stdio.h>

struct Interest {
    int principal;
    float rate;
    float time;
};

int main() {
    struct Interest interest;

    printf("Enter principal amount: ");
    scanf("%d", &interest.principal);

    printf("Enter rate of interest: ");
    scanf("%f", &interest.rate);

    printf("Enter time period (in years): ");
    scanf("%f", &interest.time);


    float simpleInterest = (interest.principal * interest.rate * interest.time) / 100.0;
    printf("Simple Interest: %.2f\n", simpleInterest);

    return 0;
} #include <stdio.h>
struct Car {
    char name[50];
    int year;
    char color[20];
};

int main() {
    struct Car car;

    printf("Enter car name: ");
    scanf("%s", car.name);

    printf("Enter manufacturing year: ");
    scanf("%d", &car.year);

    printf("Enter car color: ");
    scanf("%s", car.color);

    printf("\nCar Details\n");
    printf("Name: %s\n", car.name);
    printf("Year: %d\n", car.year);
    printf("Color: %s\n", car.color);

    return 0;
}


#include <stdio.h>

struct Degree {
    char name[50];
    int duration;
    float totalFees;
}d[3];

int main() {
    int i;
    for (i = 0; i < 3; i++) {
        printf("Enter details for d%d:\n", i + 1);

        printf("Enter degree name: ");
        scanf("%s", &d[i].name);

        printf("Enter duration (in years): ");
        scanf("%d", &d[i].duration);

        printf("Enter total fees: ");
        scanf("%f", &d[i].totalFees);

        printf("\n");
    }

    // Output details for all three degrees
    printf("\nDegree Details\n");
    for (i = 0; i < 3; i++) {
        printf("Degree %d:\n", i + 1);
        printf("Name: %s\n", d[i].name);
        printf("Duration: %d years\n", d[i].duration);
        printf("Total Fees: %.2f\n", d[i].totalFees);
        printf("\n");
    }

    return 0;
}

#include<stdio.h>
struct distance
    {
        int f, in;
    }d1,d2,d3;
void main()
{
    printf("Enter d1: ");
    scanf("%d", &d1.f);
    scanf("%d", &d1.in);
    printf("Enter d2: ");
    scanf("%d", &d2.f);
    scanf("%d", &d2.in);
    d3.f = d1.f + d2.f;
    if (d1.in + d2.in >=12)
    {
        d3.in = d1.in + d2.in - 12;
        d3.f+=1;
}
    printf("Addition of d1 and d2 is %d ft %d inch .",d3.f, d3.in);
}

#include<stdio.h>
struct complex
{
    int real, imag;
}c1,c2,c3;
void main()
{
    printf("Enter number 1 : ");
    scanf("%d %d", &c1.real, &c1.imag);
    printf("Enter number 2 : ");
    scanf("%d %d", &c2.real, &c2.imag);
    c3.real = c1.real + c2.real;
    c3.imag = c1.imag + c2.imag;
    printf("The addition is : %d + %di ." ,c3.real, c3.imag);

}   */

#include <stdio.h>

struct Employee {
    char Name[50];
    int Age;
    char Gender;
    int Salary;
} E[2];

int main()
{
    int i;
    for (i = 0; i < 2; i++) {
        printf("Enter details for E_%d:\n", i + 1);

        printf("Enter Employee name: ");
        scanf("%s", E[i].Name);

        printf("Enter Age : ");
        scanf("%d", &E[i].Age);

        printf("Enter Gender :  ");
        scanf("%c", &E[i].Gender); // added space before %c

        printf("Enter Salary : ");
        scanf("%d", &E[i].Salary);

        printf("\n");
    }
    printf("\nEmployee Details\n");
    for (i = 0; i < 2; i++) {
        printf("E_%d:\n", i + 1);
        printf("Name: %s\n", E[i].Name);
        printf("Age: %d years\n", E[i].Age);
        printf("Gender: %c\n", E[i].Gender);
        printf("Salary: %d\n", E[i].Salary);
        printf("\n");
    }
    return 0;
}
