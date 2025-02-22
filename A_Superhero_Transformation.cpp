#include <iostream>
#include <set>
using namespace std;

bool isVowel(char ch) {
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}
int main() {
    string s, t;
    cin >> s >> t;
    if (s.length() != t.length()) {
        cout << "No" << endl;
        return 0;
    }
    for (size_t i = 0; i < s.length(); i++) {
        if ((isVowel(s[i]) && !isVowel(t[i])) || (!isVowel(s[i]) && isVowel(t[i]))) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
