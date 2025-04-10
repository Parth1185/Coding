#include<iostream>
using namespace std;

class A
{
    public:
    virtual void show()
    {
        cout<<"FUNCTION A"<<endl;
    }
};
class B:public A
{
    // void show()
    // {
    //     cout<<"Show Function B"<<endl;
    // }
};
class C: public A
{
    void show()
    {
        cout<<"Show Function C"<<endl;
    }
};
int main() {
    A *obj;
    B obj1;
    C obj2;
    obj = &obj1;
    obj->show();  
    obj=&obj2;
    obj->show();
    return 0;
}