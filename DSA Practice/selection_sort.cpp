#include<iostream>
#include<string>
using namespace std;

void selection_sort(string arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        int min_ind = i;
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[min_ind])
            {
                min_ind = j;
            }
        }
        if(min_ind != i)
        {
            swap(arr[i], arr[min_ind]);
        }
    }
}

int main() {
    int n;
    cout << "Enter number of strings: ";
    cin >> n;

    string arr[n];
    cout << "Enter " << n << " strings: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    selection_sort(arr, n);

    cout << "Strings in dictionary order: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}



// #include<iostream>
// using namespace std;

// void selection_sort(char *str, int n)
// {
//     for(int i = 0; i < n - 1; i++)
//     {
//         int min_ind = i;
//         for(int j = i + 1; j < n; j++)
//         {
//             if(str[j] < str[min_ind])
//             {
//                 min_ind = j;
//             }
//         }
//         if(min_ind != i)
//         {
//             swap(str[i], str[min_ind]);
//         }
//     }
// }

// int main() {
//     char s[50];
//     cout << "Enter String: ";
//     cin >> s;
//     int i;
//     for(i = 0; s[i] != '\0'; i++);

//     selection_sort(s, i);

//     cout << s << "\n";
    
//     return 0;
// }
