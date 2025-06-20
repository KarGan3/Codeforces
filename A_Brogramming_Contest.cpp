#include <iostream>
#include <string>

using namespace std;

int min_moves_for_brogramming_contest(const string& s) {
    int count = 0;
    bool in_ones = false;
    
    for (char c : s) {
        if (c == '1') {
            if (!in_ones) {
                // Start of a new group of 1s
                count++;
                in_ones = true;
            }
        } else {
            // It's a 0
            in_ones = false;
        }
    }
    
    // This is our final answer
    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;  // Number of test cases
    
    for (int i = 0; i < t; i++) {
        int n;
        string s;
        
        cin >> n;  // Length of string s
        cin >> s;  // The binary string
        
        cout << min_moves_for_brogramming_contest(s) << "\n";
    }
    
    return 0;
}