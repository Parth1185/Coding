#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;

// int main()
// {
//     //writing to a file
//     ofstream outFile("F:\\Examples\\example.txt");
//     if(!outFile)
//     {
//         cout << "Error opening file for writing! \n";
//         return 1;
//     }

//     outFile << "This is the first line."<<endl;
//     outFile << "This is the second line."<<endl;
//     outFile.close();
//     cout <<endl<< "Data successfully written to the file. \n"<<endl;

//     //read data from file
//     ifstream inFile("F:\\Examples\\example.txt");
//     if(!inFile)
//     {
//         cout<< "Error opening file for reading! "<<endl;;
//         return 1;
//     }

//     string line;
//     while(getline(inFile, line))
//     {
//         cout << line << endl;
//     }
//     inFile.close();
//     cout<<"\n"; 
//     return 0;
// }






// int main(){
//     ifstream inFile("F:\\examples\\example.txt");
//     if(!inFile){
//         cout<<"Error Opening File"<<endl;
//         return 1;
//     }
//     string word,line;
//     int wordCount=0, lineCount=0, charCount=0;

//     while(getline(inFile,line)){
//         lineCount++;
//         charCount+=line.length();
//         stringstream ss(line);
//         while(ss>>word){
//             wordCount++;
//         }
//     }
//     cout<<"Lines : "<<lineCount<<endl;
//     cout<<"Words : "<<wordCount<<endl;
//     cout<<"Characters : "<<charCount<<endl;
//     return 0;
// }



int main()
{
    ofstream outFile("F:\\Examples\\abc.txt");
    if(!outFile)
    {
        cout << "Error opening file for writing! \n";
        return 1;
    }

    outFile << "Hello."<<endl;
    outFile << "World."<<endl;
    outFile << "Coding." << endl;
    outFile.close();
    cout <<endl<< "Data successfully written to the file. \n"<<endl;

    ifstream inFile("F:\\Examples\\abc.txt");
    if(!inFile)
    {
        cout<< "Error opening file for reading! "<<endl;;
        return 1;
    }

    string line;
    while(getline(inFile, line))
    {
        cout << line << endl;
    }
    inFile.close();
    cout<<"\n"; 
}