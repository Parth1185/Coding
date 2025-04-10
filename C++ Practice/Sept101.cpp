//CONSTRUCTOR

#include<iostream>
using namespace std;

class abc
{
    int a,b;

    public:
    abc()   //default
    {
        a=0;
        b=0;
    }

    abc(int x, int y)    //parametrised
    {
     a=x;
     b=y;
    }

    abc(abc &k)  //copy
    {
        a=k.a;
        b=k.b;
    }

    ~abc()
    {
        cout<<"destructor\n";
    }

    void display()
    {
        cout << a << " " << b<<endl;
    }
};

int main() {
    
    abc ob1;    //default
    abc ob2(10,5); //parametrised
    abc ob3(ob2);  //copy  //copies values from ob2 as reference    //abc ob3(ob1); //copies values from ob1 as reference
    

    // ob1.display(); 
    // ob2.display();
    // ob3.display();

    abc ob4=ob2; //implicit calling
    ob4.display();

    abc ob5;
    ob5=ob2; //explicit calling 
    ob5.display();

    
    return 0;
}