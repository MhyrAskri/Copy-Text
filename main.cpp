#include <iostream>
#include <string>
#include <fstream>
#include <conio.h>

using namespace std;

int main() {

    ifstream inFile {"../romeoandjuliet.txt"};
    ofstream outFile {"../romeoandjuliet_copy.txt"};
    string line;
    int count;

    if (!inFile) {

        cerr << "Problem open file" << endl;
        return 1;

    }
    if (!outFile) {

        cerr << "Problem create file" << endl;
        return 1;

    }

    while (getline(inFile , line)) {

        ++count;
        outFile << count << "- " << line << endl;

    }

    inFile.close();
    outFile.close();

    cout << "file copied" << endl;

    getch();
    return 0;
}
