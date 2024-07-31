#include <iostream>
#include <cstring>
using namespace std;
char* concat(const char* str1, const char* str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    char* result = new char[len1 + len2 + 1]; 
    strcpy(result, str1);
    strcat(result, str2);
    
    return result;
}
string concat(const string& str1, const string& str2) {
    return str1 + str2;
}

int main() {
    const char* charArr1 = "Hello";
    const char* charArr2 = "World";
    string str1 = "Good ";
    string str2 = "morning";
    char* concatCharArr = concat(charArr1, charArr2);
    cout << "Concatenated character array: " << concatCharArr << endl;
    delete[] concatCharArr; 
    string concatStr = concat(str1, str2);
    cout << "Concatenated string: " << concatStr << endl;

    return 0;
}
