#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    //writing to a file
    ofstream outFile("F:\\Examples\\example.txt");
    if(!outFile)
    {
        cout << "Error opening file for writing! \n";
        return 1;
    }

    outFile << "This is the first line."<<endl;
    outFile << "This is the second line."<<endl;
    outFile.close();
    cout << "Data successfully written to the file. \n";

    //read data from file
    ifstream inFile("F:\\Examples\\example.txt");
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
    return 0;
}