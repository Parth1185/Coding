#include<iostream>
using namespace std;

void floydPattern(int r) {
    int count=1;
    for(int i=1;i<r;i++) {
        for(int j=1;j<=i;j++) {
            //cout<<count++<<" ";
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    cout<<"First Call"<<endl;;
    floydPattern(6);
    cout<<"\n";

    cout<<"Second Call"<<endl;
    floydPattern(10);
    return 0;
}

/*#include <iostream>
using namespace std;

void hollowrect(int r, int c){

for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){

        if(i==0||i==r-1||j==0||j==c-1){
            cout<<"*"; }
            else{
                    cout<<" ";
            }
        }
        cout<<endl;
    }
}

int main()
{
    int r,c;
    cout<<"Enter Rows :";
    cin>>r;
    cout<<"Enter Columns :";
    cin>>c;
    hollowrect(r,c);
    return 0;
}
*/
