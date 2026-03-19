#include <iostream>
#include <string>
#include <cctype>

using namespace std;

/**
 * Recursive function to check if a string is a palindrome.
 * @param s The input string.
 * @param start The current left index.
 * @param end The current right index.
 * @return True if the substring is a palindrome, False otherwise.
 */
bool isPalindrome(const string& s, int start, int end) {
    // Base case: If the indices cross or meet, all characters matched.
    if (start >= end) {
        return true;
    }

    // Compare characters after converting to lowercase (ignoring case).
    if (tolower(s[start]) != tolower(s[end])) {
        return false;
    }

    // Recursive step: Move inward by one character from both ends.
    return isPalindrome(s, start + 1, end - 1);
}

int main() {
    // Optimize I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string word;
    // Read one word from standard input
    if (cin >> word) {
        // Edge case: empty string or single character
        if (word.empty()) {
            cout << "True" << endl;
        } else {
            // Check palindrome starting from both ends
            if (isPalindrome(word, 0, word.length() - 1)) {
                cout << "True" << endl;
            } else {
                cout << "False" << endl;
            }
        }
    }

    return 0;
}