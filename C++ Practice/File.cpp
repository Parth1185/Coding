#include<iostream>
#include<fstream>
using namespace std;
int main() {
    
    ifstream ob1("a.txt");
    // int n;

    // if(ob1.eof())
    // {
    //     cout<<"File Not Opened.\n";
    // }

    // ob1>>n;//cin>>n;
    // cout<<n;

    // ob1.close();

    // ofstream ob2("a.txt"); //constructor method

ofstream ob2;
ob2.open("a.txt");
    ob2<<"Welcomee\n";
    ob2<<"Backk\n";
    ob2<<5464;
    ob2.close();

    string line;

    if(!ob1)
    {
        cout<<"Error in file opening\n";
    }
    else
    {
        while(!ob1.eof())
    {
        getline(ob1,line);
        cout<<line<<endl;
    }
    }
    

    ob1.close();

    return 0;
}