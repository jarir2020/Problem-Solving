#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream inputFile("example.txt"); // Open the file for reading

    // Check if the file was opened successfully
    if (!inputFile.is_open()) {
        cerr << "Failed to open the file." << endl;
        cerr << "Creating the file..." << endl;

        // Create the file
        ofstream createFile("example.txt"); //File name dhorse object er moddhe

        if (createFile.is_open()) { //checks the write permission + open the file
            createFile << "abcde"; // Write "abcde" into the file
            createFile.close();
        } else {
            cerr << "Failed to create the file." << endl;
            return 1; // Exit with an error code
        }


        // Try opening the file again
        inputFile.open("example.txt");

        // Check if the file was opened successfully
        if (!inputFile.is_open()) {
            cerr << "Failed to open the file." << endl;
            return 1; // Exit with an error code
        }
    }

    char ch;
    while (!inputFile.eof()) {
        inputFile.get(ch); // Read a character from the file
        if (!inputFile.eof()) {
            cout << ch; // Output the character
        }
    }

    inputFile.close(); // Close the file

    return 0; // Exit successfully
}
