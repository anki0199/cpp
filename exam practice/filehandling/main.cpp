#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    string file_path = "textFile.txt";  // Replace with your file path

    ifstream file(file_path);

    if (!file.is_open()) {
        cerr << "Error opening file." << endl;
        return 1;
    }

    // Check if the file is empty
    if (file.peek() == ifstream::traits_type::eof()) {
        // File is empty, write a message
        ofstream empty_file(file_path);
        empty_file << "File is empty. Message written." << endl;
        cout << "File is empty. Message written." << endl;
    } else {
        // File is not empty
        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }
    }

    file.close();
    return 0;
}
