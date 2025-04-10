/*#include <iostream>
#include <iomanip>
using namespace std;
int main() {
   int a=2;
   double d = a;
    //cout<<a<<endl;
    cout<<d<<endl;
    cout<<fixed<<setprecision(5)<<endl;
    cout<<d<<endl;
    return 0;

}
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int factorial = 1;
    for (int i = 1; i <= number; ++i) {
        factorial *= i;
    }

    cout << "Factorial of " << number << " is: " << factorial << endl;

    return 0;
}
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    float a;
    a = n*(n+1)/(2*n);
    cout<<"Average is : "<<(a) <<endl;

    return 0;

}
