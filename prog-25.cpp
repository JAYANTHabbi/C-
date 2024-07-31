#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string inputString;
    string filename = "output.txt";

    // Input a string
    cout << "Enter a string: ";
    getline(cin, inputString);

    // Calculate the length of the string
    int length = inputString.length();
    cout << "Length of the string: " << length << "\n";

    // Store the string in a file
    ofstream outFile(filename);
    if (!outFile) {
        cerr << "Error: Could not open file " << filename << " for writing.\n";
        return 1;
    }
    outFile << inputString;
    outFile.close();
    cout << "String has been written to the file " << filename << "\n";

    // Fetch the stored characters from the file
    ifstream inFile(filename);
    if (!inFile) {
        cerr << "Error: Could not open file " << filename << " for reading.\n";
        return 1;
    }
    string fetchedString;
    getline(inFile, fetchedString);
    inFile.close();

    // Display the fetched string
    cout << "Fetched string from the file: " << fetchedString << "\n";

    return 0;
}

