#include<iostream> // Include the input-output stream library.
#include<string> // Include the string library for string manipulation.

using namespace std; // Use the standard namespace to simplify code.

// Function to check if a character is a letter (A-Z or a-z).
bool isLetter(char c) 
{
    // This function checks if the character 'c' is a letter (A-Z or a-z).
    // It returns true if 'c' is a letter, otherwise false.
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

// Function to count the number of letters in a given string.
int numLetters(string text)
{
    int count = 0;
    for(int i = 0; i < text.size(); i++)
    {
        if(isLetter(text[i])) // Check if the character is a letter.
        {
            count++; // Increment the letter count.
        }
    }
    // This function counts the number of letters in the input string 'text'.
    // It uses the 'isLetter' function to identify letters and increments 'count' accordingly.
    // The final count is returned.
    return count; // Return the total letter count.
}

// Function to count the number of words in a given string.
int numWords(string text)
{
    int count = 0;
    for(int i = 0; i < text.size(); i++)
    {
        if(text[i] == ' ') // Check if the character is a space, indicating a word boundary.
        {
            count++; // Increment the word count.
        }
    }
    // This function counts the number of words in the input string 'text'.
    // It assumes that words are separated by spaces, so it increments 'count' for each space encountered.
    // The final count is returned, and 1 is added to account for the last word.
    return count + 1; // Return the total word count (add 1 to account for the last word).
}

// Function to count the number of sentences in a given string.
int numSentence(string text)
{
    int count = 0;
    for(int i = 0; i < text.size(); i++)
    {
        if(text[i] == '.' || text[i] == '!' || text[i] == '?') // Check for sentence-ending punctuation.
        {
            count++; // Increment the sentence count.
        }
    }
    // This function counts the number of sentences in the input string 'text'.
    // It looks for sentence-ending punctuation marks ('.', '!', '?') and increments 'count' for each occurrence.
    // The final count is returned.
    return count; // Return the total sentence count.
}

int main()
{
    string paragraph;

    cout << "Enter paragraph" << endl; // Prompt the user to enter a paragraph.
    getline(cin, paragraph);    // Read a line of text from the user and store it in 'paragraph'.
    /*This method reads an entire line of text, 
	including spaces, from the input and stores it in the 'paragraph' variable. 
	It stops reading when it encounters a newline character. This is more 
	suitable for capturing entire sentences, including spaces.*/

    cout << "Number of letters is " << numLetters(paragraph) << endl; // Display the number of letters.
    cout << "Number of words is " << numWords(paragraph) << endl; // Display the number of words.
    cout << "Number of sentences is " << numSentence(paragraph) << endl; // Display the number of sentences.

    return 0; // Return 0 to indicate successful program execution.
}

