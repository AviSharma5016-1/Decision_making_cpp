// Name - Avi Sharma
// PRN - 24070123025
// Batch - EnTC - A1 
// Expt - 5B

#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a single character: ";
    cin >> ch;

    char lowerCh = tolower(ch);

    if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
        cout << "The character '" << ch << "' is a vowel.";
    } else {
        cout << "The character '" << ch << "' is a consonant.";
    }

    return 0;
}

/*
Sample Output (Checked by Avi Sharma):

Enter a single character: H
The character 'H' is a consonant.

------------------------------

Enter a single character: E
The character 'E' is a vowel.

--- Program Executed Successfully ---
*/
