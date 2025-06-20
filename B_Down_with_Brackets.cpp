#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.length();
        bool canMakeUnbalanced = false;
        for (int i = 0; i < n && !canMakeUnbalanced; i++) {
            if (s[i] == '(') {
                for (int j = 0; j < n && !canMakeUnbalanced; j++) {
                    if (s[j] == ')') {
                        string temp = "";
                        for (int k = 0; k < n; k++) {
                            if (k != i && k != j) {
                                temp += s[k];
                            }
                        }
                        
                        int balance = 0;
                        bool isUnbalanced = false;
                        for (char c : temp) {
                            if (c == '(') {
                                balance++;
                            } else {
                                balance--;
                                if (balance < 0) {
                                    isUnbalanced = true;
                                    break;
                                }
                            }
                        }
                        
                        if (isUnbalanced || balance != 0) {
                            canMakeUnbalanced = true;
                        }
                    }
                }
            }
        }
        
        if (canMakeUnbalanced) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }    
    return 0;
}