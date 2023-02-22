#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<string> words;
    string word;
    string name;
    ifstream infile("words");
    ifstream namefile("names");
    ofstream outfile("words2");

    if (!infile.is_open()) {
        cerr << "Unable to open file." << endl;
        return 1;
    }

    // Read in all the words from the file
    while (infile >> word) {
        // bool isNormal = true;
        // while (namefile >> name){
        //     if (word.substr(0, name.size()) == name){
        //         isNormal = false;
        //         break;
        //     }
        // }
        // namefile.clear();
        // namefile.seekg(0);
        // for (char c : word) {
        //     if (!isalpha(c)) { // Add condition to check for non-alphabetical characters
        //         isNormal = false;
        //         break;
        //     }
        // }
        if (/*isNormal && word.find('\'') == string::npos && word.length() < 16 &&*/ word.length() > 2) { // Add conditions for apostrophes and length
            words.push_back(word);
        }
    }

    infile.close();

    // Sort the words in alphabetical order
    sort(words.begin(), words.end());

    // Print out the sorted words
    for (const auto& w : words) {
        outfile << w << endl;
    }
    cout << "DONE!" << endl;
    return 0;
}
