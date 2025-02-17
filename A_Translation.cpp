#include <iostream>
#include <string>
using namespace std;
int main() {
    string s, t;
    cin >> s >> t;
    if (s.length() != t.length()) {
        cout << "NO";
        return 0;
    }
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != t[t.length() - i - 1]) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}