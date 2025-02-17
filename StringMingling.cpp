#include <iostream>  // Include the input-output stream library
using namespace std;

// Recursive function to merge two strings character by character
string mingleStringsRecursive(string P, string Q, int index = 0) {
    string output = "";  // Initialize an empty string to store the result

    // Base case: If the index reaches the length of the strings, stop recursion
    if (index >= P.length()) {
        return "";  // Return an empty string when the end is reached
    }

    // Append the current character from P and Q, then recursively call for the next index
    output = output + P[index] + Q[index] + mingleStringsRecursive(P, Q, index + 1);

    // Return the final mingled string
    return output;
}

int main() {
    string P, Q;  // Declare two strings to store input values

    cin >> P >> Q;  // Read input strings from the user

    // Call the recursive function and print the mingled string
    cout << mingleStringsRecursive(P, Q) << endl;

    return 0;  // Indicate that the program executed successfully
}