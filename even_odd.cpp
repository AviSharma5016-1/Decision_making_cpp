// Name - Avi Sharma
// PRN - 24070123025
// Batch - EnTC - A1 
// Expt - 5A

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter any number: ";
    cin >> num;

    if (num % 2 == 0)
        cout << "The number " << num << " is even.";
    else
        cout << "The number " << num << " is odd.";

    return 0;
}

/*
Sample Output (Verified by Avi Sharma):

Enter any number: 24
The number 24 is even.

------------------------

Enter any number: 55
The number 55 is odd.

--- Program Executed Successfully ---
*/
