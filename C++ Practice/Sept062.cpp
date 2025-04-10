//FRIEND FUNCITON

#include<iostream>
using namespace std;

class Student
{
    int age;
    char name[30];
    public:
    void input();
    // friend void display(Student );
    
};

void Student::input()
{
    cout<<"Enter Age : ";
    cin >> age;
    cout<<"Enter Name : ";
    cin >> name;
}

void display(Student t)
{
    cout << t.name << " " << t.age <<endl;
}

int main() {
    Student ob;
    ob.input();
    display(ob);
    return 0;
}