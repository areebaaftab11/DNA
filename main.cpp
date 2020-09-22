#include <iostream>
#include <fstream>
#include <string>


#include "DNA.h"

using namespace std;

int main(int argc, const char * argv[]) {

    if (!(argc==2))
    {
        cout << "Enter the file that you want to be analyzed"<< endl;
        exit(0);
    }

    string fileName = argv[1];
    while (true)
    {
        cout << "File is beign read...\n"<< endl;
        ofstream outFile;
        outFile.open("areebaAftab.out");
        outFile << "Areeba Aftab\n2338751\naftabchapman.edu\nCPSC 350\nAssignment 1\n" << endl;
        DNA dna;

        outFile << dna.calculations(fileName);
        outFile << dna.generateDNA(fileName);
        outFile.close();

        bool again = true;
        while (again)
        {
            cout << "File read, new file written.\nWould you like another file to be read and overwrite the newly written one? Y or N" <<endl;
            string input;
            cin >> input;
            if (input == "Y" || input == "y")
            {
                cout << "\nEnter txt file" <<endl;
                cin >> fileName;
                again = false;
            }
            if (input == "N" || input == "n")
            {
                cout << "\nDone." << endl;
                return 0;
            }
            else
            {
                cout << "\nPlease enter a valid option" << endl;
            }
        }
    }
}
