// #include <iostream>

// using namespace std;

// int main() {
//     int num1, num2, num3;
    
//     // Input from user
//     cout << "Enter three numbers: ";
//     cin >> num1 >> num2 >> num3;
    
//     // Calculate sum
//     int sum = num1 + num2 + num3;
    
//     // Output the sum
//     cout << "Sum of " << num1 << ", " << num2 << ", and " << num3 << " is: " << sum << endl;
    
//     return 0;
// }



 #include <iostream>
    #include <exception>
    using namespace std;
    int main () 
    {
        try
        {
            int* myarray = new int[1000];
            cout << "allocated";
        }
        catch (exception& e)
        {
            cout << "Standard exception: " << e.what() << endl;
        }
        return 0;
    }