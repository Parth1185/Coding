#include<iostream>
using namespace std;

class Student
{
    
    int age;
    char name[20];
    double marks;
    public:
    static int count;

    void input();
    void display();
    void getcount()
    {
        cout << "numbers of objects: "<<count<<endl;
    }
};

int Student::count = 0;

void Student::input()
{
    cout << "Enter Name : ";
    cin >> name;
    cout << "Enter Age : ";
    cin >> age;
    cout << "Enter Marks : ";
    cin >> marks;
    count++;
}
void Student ::display()
{
    cout <<"Name : " << name << " " << " Age : " << age << " " << " Marks : " << marks << endl;
}

int main()
{
    
    int n;
    cout<<"Enter size : ";
    cin>>n;
    Student ob[n];

    for(int i=0;i<n;i++)
    {
        cout<<"Enter data for object "<<i+1<<": \n";
        ob[i].input();
    }

    for(int i=0;i<n;i++)
    ob[i].display();

    cout<<Student::count<<endl;  
    ob[0].getcount();  
    return 0;

}