#include <iostream>
#include <unordered_set>
using namespace std;

bool can_transform(const string &s, const string &t) {
    unordered_set<char> s_chars(s.begin(), s.end());
    for (char c : t) {
        if (s_chars.count(c)) return true;
    }
    return false;
}

int main() {
    int q;
    cin >> q;
    while (q--) {
        string s, t;
        cin >> s >> t;
        cout << (can_transform(s, t) ? "YES" : "NO") << endl;
    }
    return 0;
}