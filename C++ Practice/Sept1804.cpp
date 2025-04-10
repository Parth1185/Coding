#include <iostream>
using namespace std;

int search(char *str, char c)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (c == str[i])
        {
            return i; // Return the index of the found character
        }
    }
    return -1; // Return -1 if the character is not found
}

int main() {
    char str[50], ch;
    cout << "Enter a string: ";
    cin >> str; // Input string
    cout << "Enter a character to search: ";
    cin >> ch; // Input character

    int k = search(str, ch);
    if (k == -1) // Check if the character was not found
        cout << "Not found" << endl;
    else
        cout << "Element found at: " << k << endl; // Output the index if found

    return 0;
}



























// #include <iostream>
// using namespace std;

// int search(char *str, char c)
// {
//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         if (c == str[i])
//         {
//             return i; // Return the index of the found character
//         }
//     }
//     return -1; // Return -1 if the character is not found
// }

// int main() {
//     char str[50], ch;
//     cout << "Enter a string: ";
//     cin.getline(str, 50); // Allow multi-word input
//     cout << "Enter a character to search: ";
//     cin >> ch; // Input character

//     int k = search(str, ch);
//     if (k == -1) // Check if the character was not found
//         cout << "Not found" << endl;
//     else
//         cout << "Element found at: " << k << endl; // Output the index if found

//     return 0;
// }
