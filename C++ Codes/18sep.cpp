       // //FIRST CHARACTER OF EVERY STRING
#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    getline(str);
    string result="";
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==" " && str[i+1]!=" ")
        {
            result+=str[i];
        }

    }
    return 0;
}












        // //DELETE ALTERNATE CHARACTER OF A STRING

#include <iostream>
#include <string>
using namespace std;
int main(){
    string str = "Psahrltih";
    string result = " ";
    for(int i=0; i<str.length(); i += 2){
        result += str[i];
    }
    cout << result << endl;
    return 0;
}

