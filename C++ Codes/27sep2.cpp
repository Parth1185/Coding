#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // Writing to a file
    ofstream outFile("f:\\examples\\example.txt");
    if (!outFile) {
        cout << "Error opening file for writing!" << endl;
        return 1;
    }

    outFile << "This is the first line.\n";
    outFile << "This is the second line.\n";
    outFile.close();
    cout << "Data written to the file successfully." << endl;

    // Reading from the file
    ifstream inFile("f:\\examples\\example.txt");
    if (!inFile) {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }
}