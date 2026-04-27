#include <iostream>
#include <map>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string sentence, word;
    map<string, int> freq;

    cout << "Enter a sentence:\n";
    getline(cin, sentence);

    // Convert sentence into words
    stringstream ss(sentence);

    while (ss >> word) {
        // Optional: convert to lowercase
        for (char &c : word) {
            if (c >= 'A' && c <= 'Z')
                c = c + 32;
        }

        freq[word]++; // increase count
    }

    cout << "\nWord Frequencies:\n";

    // Display using iterator
    for (auto it = freq.begin(); it != freq.end(); it++) {
        cout << it->first << " : " << it->second << endl;
    }

    return 0;
}
