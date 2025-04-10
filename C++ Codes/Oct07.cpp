// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
//     // Append to the file
//     ofstream appendFile("f:\\examples\\modes_demo.txt", ios::app);
//     if (!appendFile) {
//         cout << "Error opening file for appending!" << endl;
//         return 1;
//     }
//     appendFile << "This is appended content." << endl;
//     appendFile.close();

//     // Read from the file (line by line)
//     ifstream inFile("f:\\examples\\modes_demo.txt");
//     if (!inFile) {
//         cout << "Error opening file for reading!" << endl;
//         return 1;
//     }
//     string line;
//     cout << "File content after writing and appending:" << endl;
//     while (getline(inFile, line)) {
//         cout << line << endl;
//     }
//     inFile.close();

//     // Reopen the same file to read word by word
//     inFile.open("f:\\examples\\modes_demo.txt");  // Reopen the file

//     if (!inFile) {
//         cout << "Error opening file!" << endl;
//         return 1;
//     }
//     string word;
//     cout << "Reading file word by word:" << endl;
//     while (inFile >> word) {
//         cout << word << endl;
//     }
//     inFile.close();
    
//     return 0;
// }




// #include <iostream>
// #include <fstream>
// using namespace std;
// int main() {
// // Writing to a binary file
// ofstream outFile("f:\\examples\\binary_data.bin", ios::binary);
// if (!outFile) {

// cout << "Error opening binary file for writing!" << endl;
// return 1;
// }
// int numbers[] = {1, 2, 3, 4, 5};
// outFile.write(reinterpret_cast<char*>(numbers), sizeof(numbers));
// outFile.close();
// cout << "Data written to the binary file successfully." << endl;
// // Reading from a binary file
// ifstream inFile("f:\\examples\\binary_data.bin", ios::binary);
// if (!inFile) {
// cout << "Error opening binary file for reading!" << endl;
// return 1;
// }
// int readNumbers[5];
// inFile.read(reinterpret_cast<char*>(readNumbers), sizeof(readNumbers));
// cout << "Data read from the binary file:" << endl;
// for (int i = 0; i < 5; ++i) {
// cout << readNumbers[i] << " ";
// }
// cout << endl;
// inFile.close();
// return 0;
// }



// #include <iostream>
// #include <fstream>
// using namespace std;
// int main() {
// // Writing to a file and using tellp()
// ofstream outFile("f:\\examples\\pointer_demo.txt");
// if (!outFile) {
// cout << "Error opening file!" << endl;
// return 1;
// }
// outFile << "This is some data." << endl;
// cout << "Current position in output file (tellp): " << outFile.tellp() << endl;
// outFile.close();
// // Reading from a file and using tellg()
// ifstream inFile("f:\\examples\\pointer_demo.txt");
// if (!inFile) {
// cout << "Error opening file!" << endl;

// return 1;
// }
// cout << "Current position in input file (tellg): " << inFile.tellg() << endl;
// char c;
// inFile.get(c); // Read a character
// cout << "Character read: " << c << endl;
// cout << "Position after reading one character (tellg): " << inFile.tellg() << endl;
// inFile.close();
// return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {
// vector<int> numbers = {1,2,3,4,5};

// numbers.push_back(6);
// numbers.push_back(7);

// cout<<"First Element : "<<numbers[0]<<endl;
// cout<<"Last Element : "<<numbers.back()<<endl;
// cout<<"Second Element : "<<numbers[1]<<endl;


// numbers[1] = 10;
// cout<<"Modified Second Element : "<<numbers[1]<<endl;

// cout<<"Elements in the vector : ";
// for(int num : numbers)
// {
//     cout<<num << " ";
// }
// cout<<endl;

// numbers.pop_back();


// cout<<"Size of the Vector : "<<numbers.size()<<endl;

// numbers.clear();
// cout<<"Size of the Vector after clearing : "<<numbers.size()<<endl;


// return 0;
// }


#include<iostream>
#include<vector>
#include<algorithm> //for sort
#include<functional> //for greater

using namespace std;
int main(){
    vector<int> numbers={5,2,9,1,5,6};

    //sort the vector in ascendinng order
    sort(numbers.begin(),numbers.end());
    cout<<"sorted in ascending order"<<endl;

    for(int num:numbers){
        cout<<num<<" ";
    }
    cout<<endl;

    //sort the vector in deescending order
    sort(numbers.begin(),numbers.end(),greater<int>());
    cout<<"sorted in descending order"<<endl;

    for(int num:numbers){
        cout<<num<<" ";
    }
    cout<<endl;

}