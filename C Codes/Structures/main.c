/* #include <stdio.h>
 struct student
{
    char name[20];
    int roll_no;
    double marks;
}s[4]; //array of structures //s1,s2; it is array within structures
void main()
{
  //struct student s3 = {"Sample String", 80, 98.5};
    int i;
    for(i=0;i<4;i++)
    {
    printf("Enter details : \n");
    scanf("%s", s[i].name);
    scanf("%d %lf",&s[i].roll_no,&s[i].marks);
    }
    for(i=0;i<4;i++)
    {

    printf("Details are : %s %d %.2lf\n", s[i].name, s[i].roll_no, s[i].marks);
    printf("Details of s3 are : %s %d %.2lf  ", s3.name, s3.roll_no, s3.marks);
    }
}
    */





/* #include <stdio.h>
struct student
{
    char name[20];
    int roll_no;
    double marks;
}s[3];
void main()
{
    int i;
    for(i=0;i<3;i++)
    {
    printf("Enter details : \n");
    fflush(stdin);
    scanf("%s", s[i].name);
    fflush(stdin);
    scanf("%d",&s[i].roll_no);
    fflush(stdin);
    scanf("%lf",&s[i].marks);
    }
    for(i=0;i<3
    ;i++)
    {
    printf("Details are : %s %d %.2lf\n", s[i].name, s[i].roll_no, s[i].marks);
    }
}   */




#include <stdio.h>
struct date{
int DD;
int MM;
int YYYY;
};
struct student
{
    char name[20];
    int roll_no;
    double marks;
    struct date d1;
}s1;
void main()
{
    int i;
    printf("Enter details : \n");
    scanf("%c", s1.name);
    scanf("%d",&s1.roll_no);
    scanf("%lf", &s1.marks);
    scanf("%d%d%d", &s1.d1.DD,&s1.d1.MM, &s1.d1.YYYY);
    printf("\nDetails of student are : \n");
    printf("Name : %s\n", s1.name);
    printf("Roll No. : %d\n", s1.roll_no);
    printf("Marks : %.2lf\n", s1.marks);
    printf("Date : %d/%d/%d", s1.d1.DD,s1.d1.MM, s1.d1.YYYY);
}
