#include <iostream>
using namespace std;

// class A
// {
//     public:
//     A()
//     {
//         cout << "IN CONSTRUCTOR \n";
//     }
    
//     ~A()
//     {
//         cout << "IN DESTRUCTOR \n";
//     }
// };
// int main()
// {
//     A obj;
//     {
//         A obj;
//     }
//     return 0;
// }

// int main()
// {
// int x;
// cin>>x;
// cout<<x<<endl;
// int *y = new int;
// cin >> *y;
// cout << *y<<endl;
// delete y;
// return 0;
// }

        //SHALLOW COPY OF THE DATA
        //NO COPY CONSTRUCTOR CALLED
        //WILL GIVE RUNTIME ERROR IN DESTRUCTOR
        //AS YOU'RE TRYING TO DELETE THE DATA TWICE

/*class Shallow{
    private:
    int* data;

    public:
    //constructor
    Shallow(int d)
    {
        data = new int(d); //allocating memory dynamically
        cout << "Constructor: allocating memory and setting data." << endl;
    }
    //destructor
    ~Shallow()
    {
        delete data;
        cout << "Destructor: releasing memory." << endl;
    }
    void displayData()
    {
        cout << "Data : " << *data << endl;
    }
};
int main()
{
    Shallow obj1(42);
    obj1.displayData();
    Shallow obj2 = obj1; //shallow copy
    obj2.displayData();
    obj1.displayData();
    return 0;
}*/

class AS{
    int* x;
}