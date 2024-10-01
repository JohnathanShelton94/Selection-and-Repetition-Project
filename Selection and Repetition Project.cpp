// This program will read two input files whose lines are ordered by a key data field and merge these two files, 
//          writing an output file that contains all lines from both files ordered by the same key field.

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

        // Function to read the content of a file into a vector of strings
void readFile(const string& filename, vector<string>& lines) {
    ifstream file(filename);
    string line;
    while (getline(file, line)) {
        lines.push_back(line);
    }
    file.close();
}

int main() {
    vector<string> file1Lines;
    vector<string> file2Lines;
    vector<string> mergedLines;

            // Read both input files into separate vectors
    readFile("file1.txt", file1Lines);
    readFile("file2.txt", file2Lines);

            // Merge the two vectors into one
    mergedLines.insert(mergedLines.end(), file1Lines.begin(), file1Lines.end());
    mergedLines.insert(mergedLines.end(), file2Lines.begin(), file2Lines.end());

            // Sort the merged vector based on the key field (names)
    sort(mergedLines.begin(), mergedLines.end());

             // Write the merged, sorted output to a new file
    ofstream outputFile("output.txt");
    for (const string& line : mergedLines) {
        outputFile << line << endl;
    }
    outputFile.close();

    cout << "Merging complete. Output written to 'output.txt'." << endl;

    return 0;
}
