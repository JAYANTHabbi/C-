#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(int argc, char* argv[]) {
    if (argc != 3) {
        cerr << "Usage: " << argv[0] << " <input_file> <output_file>\n";
        return 1;
    }
    ifstream inputFile(argv[1]);
    if (!inputFile) {
        cerr << "Error: Could not open input file " << argv[1] << "\n";
        return 1;
    }
    ofstream outputFile(argv[2]);
    if (!outputFile) {
        cerr << "Error: Could not open output file " << argv[2] << "\n";
        inputFile.close();
        return 1;
    }
    string line;
    while (getline(inputFile, line)) {
        outputFile << line << "\n";
    }
    inputFile.close();
    outputFile.close();

    cout << "Data has been copied from " << argv[1] << " to " << argv[2] << "\n";
    return 0;
}

