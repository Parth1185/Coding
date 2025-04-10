#include <iostream>
using namespace std;
int main() {
    int a,b;
    cout<<"Enter value of a, b : ";
    cin>>a>>b;
    cout<<"Average : "<<(10.0 / 2 / 4);
    return 5;

}
/*
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int arr[]={74,43,58,60,90,64,70};
    float avg=0;
    float mean;
    int n=7;

    for(int i=0; i<7; i++){
        avg=avg+arr[i];
    }
    mean=avg/7;
    cout<<"Mean: "<<mean<<endl;

    float medium=0;

    for(int i=0; i<7; i++){
        medium+=pow(arr[i]-mean,2);
    }
    cout<<"Median: "<<medium<<endl;

    float var;
    var=medium/(n-1);

    cout<<"Variance: "<<var<<endl;

    float sd;
    sd=sqrt(var);
    cout<<"standard deviation is: "<<sd<<endl;


    return 0;
}
*/
