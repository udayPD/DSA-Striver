// A string is palindrome or not using recursion 
#include <iostream>
#include <string>
#include <algorithm> // For transform function
#include <cctype>    // For isalnum function
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        // Convert the entire string to lowercase
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        
        // Build a new string containing only alphanumeric characters
        string ans;
        for (int i = 0; i < s.length(); i++) {
            if (isalnum(s[i])) {
                ans += s[i];
            }
        }
        
        // Initialize two pointers for comparison
        int i = 0;
        int n = ans.length();
        int j = n - 1;
        
        // Compare characters from both ends towards the middle
        while (i < j) {
            if (ans[i] != ans[j]) {
                return false; // If characters don't match, it's not a palindrome
            }
            i++;
            j--;
        }
        return true; // If loop completes without finding any mismatch, it's a palindrome
    }
};

int main() {
    Solution solution;

    // Test cases
    string test1 = "A man, a plan, a canal, Panama!";
    string test2 = "race a car";
    
    // Check if test1 is a palindrome
    if (solution.isPalindrome(test1)) {
        cout << "\"" << test1 << "\" is a palindrome." << endl;
    } else {
        cout << "\"" << test1 << "\" is not a palindrome." << endl;
    }

    // Check if test2 is a palindrome
    if (solution.isPalindrome(test2)) {
        cout << "\"" << test2 << "\" is a palindrome." << endl;
    } else {
        cout << "\"" << test2 << "\" is not a palindrome." << endl;
    }

    return 0;
}
