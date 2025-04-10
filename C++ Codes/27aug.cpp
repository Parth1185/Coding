#include <iostream>
using namespace std;

/* class A
{
    private:
    char x[10];
    char y[10];

    public:
    void f(char x[] , char y[10]);
    void display();
};

void A ::f(char *a, char* b)
{
    int i,j;
    for(i=0; a[i]!='\0'; i++)
    {
        x[i] = a[i];
    }

    x[i] = '\0';

    for(j=0; b[j]!='\0'; j++)
    {
        y[j] = b[j];
    }

    y[j] = '\0';

    for(j=0 ; y[j]!='\0' ; i++ , j++)
    {
        x[i] = y[j];
    }
    x[i] = '\0';
}

void A::display()
{
    cout << "Concatenated String : " << x << endl;
}

int main()
{
    char a[10] = "ABC";
    char b[10] = "XYZ";
    A obj;
    obj.f(a,b);
    obj.display();
    return 0;
}   */

#include<cstring>

class String{
    char str[50];

    public:
    String(const char *s = " ")
    {
        strcpy(str,s);
    }

    //OPERATOR OVERLOADING FOR '+'
    String operator+(const String &other)
    {
        String result;
        strcpy(result.str , str);
        strcat(result.str , other.str);
        return result;
    }
    void display() const{
        cout << str << endl;
    }
};

int main()
{
    cout << endl;
    String arr1("Hello, ");
    String arr2("World!");
    cout << "Before Concatenation : ";
    arr1.display();

    String result = arr1 + arr2;

    cout << "After concatenation : ";
    result.display();
    cout << endl;
    return 0;
}



