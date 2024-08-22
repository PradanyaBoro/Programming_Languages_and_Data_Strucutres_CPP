#include <iostream>   // Includes the necessary header files for input/output.
#include <fstream>    // Includes the file stream header for file operations.
#include <string>     // Includes the string header for string handling.
using namespace std;  // Uses the standard C++ namespace.

int main()
{
    ifstream inputFile("TextParagraph.txt");  // Creates an input file stream to read from "TextParagraph.txt."
    string para;                             // Declares a string variable to store the paragraph.
    getline(inputFile, para);                // Reads a line from the file into the 'para' variable.

    int letter = 0;  // Initializes a counter for letters.
    int word = 0;    // Initializes a counter for words.
    int sent = 0;    // Initializes a counter for sentences.

    for (int i = 0; i < para.length(); i++)  // Loops through the characters in the 'para' string.
    {
        if (para[i] != ' ' && para[i] != ',' && para[i] != '.')  // Checks if the character is not a space, comma, or period.
        {
            letter++;  // Increments the letter count.
        }
        if (para[i] == ' ')  // Checks if the character is a space.
        {
            word++;  // Increments the word count.
        }
        if (para[i] == '.')  // Checks if the character is a period.
        {
            sent++;  // Increments the sentence count.
        }
    }

    cout << "Letters = " << letter << endl;  // Prints the letter count.
    cout << "Words = " << word + 1 << endl;   // Prints the word count (adds 1 to account for the last word).
    cout << "Sentences = " << sent << endl;  // Prints the sentence count.

    return 0;  // Returns 0 to indicate successful program execution.
}  // Ends the main function.

