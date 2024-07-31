#include <iostream>
#include <fstream>

int main() {
    std::ifstream inputFile("input.txt"); 
    std::ofstream outputFile("output.txt"); 

    char ch;
    while (inputFile.get(ch)) { 
        outputFile.put(ch); 
    }

    inputFile.close(); 
    outputFile.close();

    return 0;
}



