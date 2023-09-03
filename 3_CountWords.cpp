#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

// Function to count words in a given string
int countWords(const string& text) {
    stringstream ss(text);
    string word;
    int count = 0;

    while (ss >> word) {
        count++;
    }

    return count;
}

int main() {
    string filename;
    cout << "Enter the name of the text file: ";
    cin >> filename;

    ifstream inputFile(filename);

    if (!inputFile) {
        cerr << "Error: File doesn't Exist. " << endl;
        return 1;
    }

    string line;
    int totalNumberOfWords = 0;

    while (getline(inputFile, line)) {
        totalNumberOfWords += countWords(line);
    }

    inputFile.close();

    cout << "Total number of words in the file: " << totalNumberOfWords << endl;

    return 0;
}
