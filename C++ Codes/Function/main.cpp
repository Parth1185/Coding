#include <iostream>

using namespace std;
/*int add(int p, int q, int r)
{
    return p+q+r;
}
int add(int a, int b = 1, int c = 2)
{
    return a+b+c;
}
int main()
{
    cout << add(1,2,3)<<endl;
    cout << add(1, 4)<<endl;
    cout << add(7)<<endl;
    return 0;
}
*/
int max(int p, int q)
{

   int a= p>q?p:q;
   return a;
   /* if (p>q){
        cout<<p<< " is maximum"<<endl;
    }
    else{
        cout<<(q)<<  " is maximum"<<endl;
    }*/
}
int main()
{
    max(58,5);
    return 0;
}
