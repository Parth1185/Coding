//REFERENCE
#include <iostream>

using namespace std;

/*int main()
{
    int x=5;
    int& ref=x; // standaloe=ne declaration of the reference variable is not allowed( int& ref)
    cout << x <<endl;
    cout << ref <<endl;
    cout << &x << " " << &ref<<endl;

    int x=5, y=6;
    int& ref=x;
    cout << ref<< endl;
    ref=y;
    cout << x<< endl;

    int x=1;
    int& ref=x;
    cout << x << ref << endl;
    int y=2;
    ref= y;
    y=3;
    cout << x << ref << endl;
    x=4;
    cout << x << ref << endl;
    return 0;
}*/
/*void f(int &p1, int p2)
{
    p1++;
    p2++;
}
int main()
{
    int x1=1;
    int x2=1;
    f(x1,x2);
    cout << "x1 is " << x1 << " x2 is " << x2;
    return 0;
}*/
/*
int& returnValue(int& x){
    cout << "x = " << x << "  " << &x << endl;
    return x;
}
int main(){
    int a = 20;
    int& b = returnValue(a);
    cout << "a = " << a << "  " << &a << endl;
    cout << "b = " << b << "  " << &b << endl;

    returnValue(a) = 13;
    cout << "a = " << a << "  " << &a << endl;
    cout << "b = " << b << "  " << &b << endl;

    return 0;
}
int main()
{
    /*int x=10;
    cout << &x << endl;
    cout << *(&x) << endl;

    int x=10;
    int *ptr = &x;
    x+=10;
    cout << *ptr << endl;
    cout << x <<endl;
    *ptr+=40;
    cout << x <<endl;
    cout << *ptr << endl;

    int *p1;
    double *p2;
    string *p3;
    cout << sizeof(p1) << ' ' << sizeof(p2) << ' ' << sizeof(p3) << endl; //the answer here is 8 but due to compiler issues, it is 4
    return 0;
}

void fun(int x)
{
    x+=10;
}
void fun(int *p)
{
    *p+=10;
}
int main()
{
    int x=10;
    fun(x);
    cout << x <<endl;
    fun(&x);
    cout << x <<endl;
    return 0;
}
void f(int a[])
{

    int n = sizeof(a)/sizeof(int);
    for(int i=0;i<n;i++)
    {
        cout << a[i] << ' ';
    }
    cout << '\n';
}

int main()
{
    int a[] = {10,20,30,40,};
    int n = sizeof(a)/sizeof(int);
    for(int i=0;i<n;i++)
    {
        cout << a[i] << ' ';
    }
    cout << '\n';
    f(a);
    return 0;
}
void f(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout << a[i] << ' ';
    }
    cout << '\n';
}

int main()
{
    int a[] = {10,20,30,40,};
    int n = sizeof(a)/sizeof(int);
    f(a, n);
    return 0;
}*/
int main()
{
    /*int a[]={1,2,3};
    int *p = a;
    cout << sizeof(a) << endl;
    cout << sizeof(p) << endl;
    cout << *(a+2) << endl;
    cout << p[2] << endl;
    cout << *(p+2) << endl;


    int i=1;
    while(i<=5){
        cout<<i++<< " ";
    }

     int i=-1;
     while(i++) // all values except 0 are true
        break;
     cout<<i;

int i;
for(i=0;i<=5;++i)
{
    ++i;
    cout<<i <<" ";
}
int i;
for(i=0;i<=5;cout<<i++<<" ")
{
    // cout<<i << " ";
}*/
    return 0;
}


