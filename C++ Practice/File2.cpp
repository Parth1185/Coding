#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream ob1;
    string line;

    ob1.open("a.txt",ios::in|ios::out|ios::trunc);

    ob1<<"helllo\njaooooo bkbnbjhb\n";

    // int k=ob1.tellg();
    // cout<<k<<endl;

    //ob1.seekg(6);

    // ob1.seekp(10);
    //ob1<<"PARTH\n";

    ob1.seekg(0);
    while(!ob1.eof())
    {
        ob1>>line;
        cout<<line<<endl;
    }
}