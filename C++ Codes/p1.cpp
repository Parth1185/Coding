// #include<iostream>
// #include<string.h>
// using namespace std;

// class abc
// {
//     int a;
//     static int b;
//     int age;
//     char name[100];

//     public:
//     void hello()
//     {
//         a = 0;
//     }


//     static void fun() {
//         cout << "Static b: " << b << endl;
//         //cout<<"a is: "<<a<<endl;
//     }

    
//     void display();
//     void input();
// };

// int abc::b = 5;

// void abc::input()
// {
//     cout << "Enter age: ";
//     cin >> age;
//     cout << "Enter name: ";
//     cin >> name;
// }

// void abc::display()
// {
//     cout << "Age: " << age << ", Name: " << name << endl;
// }

// int main()
// {
//     abc ob, ob1;

//     ob1.input();
//     cout << "Current count: "  << endl;
//     ob.input();
//     cout << "Current count: "  << endl;
    
//     ob.display();
//     ob1.display();

//     abc::fun();
//     ob.fun();

//     return 0; // Corrected this line
// }

#include<iostream>
#include<string.h>
using namespace std;

class student
{
	int age;
	char name[30];	
	static int count;
	public:	
	void input();
	//inline function
	void disp()
	{
		cout<<age<<" "<<name<<endl;
		cout<<"Count: "<<count<<endl;
	}


};

int student::count=0;

void student::input()
{
	cout<<"Enter age: ";
	cin>>age;
	cout<<"Enter name: ";
	cin>>name;
	count++;
}


int main()
{
	
	student ob,ob1;
	cout<<sizeof(ob)<<endl;
	cout<<sizeof(ob1)<<endl;
	
	ob1.input();
	ob.input();
	
	ob.disp();
	ob1.disp();
//
//	ob1.age=45;
//	strcpy(ob1.name,"ravi");
//		

}


