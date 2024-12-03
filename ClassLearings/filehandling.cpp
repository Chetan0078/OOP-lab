#include<bits/stdc++.h>
using namespace std;
int main() {
    fstream file("file1.txt", ios::in | ios::out | ios::app);
    //ios= input output, in= reading, out= writing, app= append in the file;
    
    if (!file.is_open()) {
        cerr << "Failed to open the file!" << endl;
        return 1;
    }

    // Write to the file
    file << "This is a new line written to the file.\n and this is second line\n it is third line";

    // Reset the position to the beginning of the file for reading
    file.seekg(0, ios::beg);

    // Read from the file
    string line;
    cout << "Reading file content:\n";
    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();
    return 0;
}
