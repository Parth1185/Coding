#include<iostream>
#include<string>
using namespace std;

int main() {
    string s;
    cout << "Enter a String: ";
     getline(cin, s);
    
       
    int count = 0;
    for(int i = 0 ; s[i]!='\0';i++)
    {
        count++;
    }
    cout << "Number of characters: " << count << endl;
    return 0;
}


