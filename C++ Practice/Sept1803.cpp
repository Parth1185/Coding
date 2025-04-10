#include<iostream>
#include<string.h>
using namespace std;

void concat(char *p1, char *p2)
{
    int i,j;
    for(i=0;p1[i]!='\0';i++);
    for(j=0;p2[j]!='\0';j++)
    {
        p1[i+j]=p2[j];
    }
    p1[i+j]='\0';
    
}

void copy(char *p1, char *p2)
{
    int i;
    for(i=0;p1[i]!='\0';i++)
    {
        p2[i]=p1[i];
    }
    p2[i]='\0';
    
}
// void compare(char *p1, char *p2)
// {
//     int i,j;
//     for(i=0;p1[i]!='\0';i++);
//     for(j=0;p2[j]!='\0';j++);
//     if(i>j)
//     {

//     }
 
// }
int main() {
    char str1[100],str2[100];
    cout<<"Enter string 1 : ";
    cin.getline(str1, 100);
    cout<<"Enter string 2 : ";
    cin.getline(str2, 100);

    // concat(str1,str2);
    // cout<<str1<<endl;

    // copy(str1,str2);
    // cout<<str2;

    int k = strcmp(str1, str2);
    cout<<k;

    return 0;
}