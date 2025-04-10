// #include<iostream>
// using namespace std;



// void insert_sort(char *str, int n)
// {
//     char key;
//     for(int i = 1; i < n; i++)
//     {
//         key = str[i];
//         int j = i - 1;
//         while(j >= 0 && str[j] > key)
//         {
//             str[j + 1] = str[j];
//             j--;
//         }
//         str[j + 1] = key;
//     }
// }

// int main() {
//     char s[50];
//     cout<<"Enter String : ";
//     cin>>s;
//     int i;
//     for(i=0; s[i]!='\0';i++);
//     insert_sort(s,i);

//     cout<<s<<"\n";
    
//     return 0;
// }


#include<iostream>
#include<string>
using namespace std;

void insert_sort(string arr[], int n)
{
    string key;
    for(int i = 1; i < n; i++)
    {
        key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int n;
    cout << "Enter number of strings: ";
    cin >> n;

    string arr[n];
    cout << "Enter " << n << " strings : ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    insert_sort(arr, n);

    cout << "Strings in dictionary order : ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
