#include<iostream>
using namespace std;

void bubblesort(char *str,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(str[j]>str[j+1])
            {
                char temp = str[j];
                str[j] = str[j+1];
                str[j+1]=temp;
            }
        }
    }
}
int main() {
    char s[50];
    cin>>s;
    int i;
    for(i=0; s[i]!='\0';i++);
    bubblesort(s,i);

    cout<<s<<"\n";
    
    return 0;
}