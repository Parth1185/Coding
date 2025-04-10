        // INHERITANCE
#include<iostream>
using namespace std;

        // SINGLE 
// class Base
// {
//     public:
//     int year = 2002;
// };

// class  derived : public Base{
//     public:
//     void display()
//     {
//         cout << year << endl;
//     }
// };
// int main() {
//     derived obj;
//     obj.display();  
//     return 0;
// }

        //MULTIPLE

// class b1
// {
//     protected:
//     int a = 10;
// };

// class b2 : public b1
// {
//     protected:
//     int b = 20;
// };

// class derived : public b2
// {
//     public:
//     void display()
//     {
//         cout << a << " " << b << endl;
//     }
// };

// int main()
// {
//     derived obj;
//     obj.display();
//     return 0;
// }

        //MULTI-LEVEL

// class Machine
// {
//     public:
//     void start()
//     {
//         cout<<"Its turned on" << endl;
//     }
//     void off()
//     {
//         cout << "Its off now" << endl;
//     }
// };
// class Fan : public Machine
// {
//     protected:
//     string machinename = "Fan";
//     public:
//     start(machinename)
// };

// class Microwave : public Fan
// {
// };

// int main()
// {
//     Fan ob1;
//     ob1.start();
//     ob1.off();
//     return 0;
// }

        //HIRERCHICAL  
        





        /////////

        #include<iostream>
        using namespace std;

        class Animal
        {
                public:
                void eat()
                {
                        cout<<"Eating..."<<endl;
                }
        };

        class Dog :public Animal{
                public:
                void bark()
                {
                        cout<<"Barking..."<<endl;
                }
        };
        int main() {
                Dog d;
                d.eat(); //inherited from Animal
                d.bark();//from dog
                return 0;
        }