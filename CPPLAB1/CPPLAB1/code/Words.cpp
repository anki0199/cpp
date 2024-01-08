#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

// Function to check if a word exists in the file
bool isWordInFile(const string &word, const string &filename)
{
    ifstream file(filename);

    if (!file.is_open())
    {
        cerr << "Error opening file: " << filename << endl;
        return false;
    }

    string line;
    while (getline(file, line))
    {
        if (line == word)
        {
            file.close();
            return true;
        }
    }

    file.close();
    return false;
}

int main()
{
    /*
    1. create word.txt
    2. take 10 words from user check against word.txt
    */
    const string filename = "words.txt";
    const int numWordsToCheck = 10;

    vector<string> userWords;
    for (int i = 0; i < numWordsToCheck; ++i)
    {
        string word;
        cout << "Enter word " << i + 1 << ": ";
        cin >> word;
        userWords.push_back(word);
    }

    cout << "\nResults:\n";
    for (const string &word : userWords)
    {
        if (isWordInFile(word, filename))
        {
            cout << "Word '" << word << "' found in the file.\n";
        }
        else
        {
            cout << "Word '" << word << "' not found in the file.\n";
        }
    }

    return 0;
}
