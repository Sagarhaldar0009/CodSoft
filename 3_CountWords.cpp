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
        cerr << "Error: Unable to open the file." << endl;
        return 1;
    }

    string line;
    int totalWords = 0;

    while (getline(inputFile, line)) {
        totalWords += countWords(line);
    }

    inputFile.close();

    cout << "Total word count in the file: " << totalWords << endl;

    return 0;
}
