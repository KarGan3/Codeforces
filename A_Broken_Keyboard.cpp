#include <iostream>
#include <set>
using namespace std;

void findWorkingKeys(string s) {
    set<char> workingKeys;
    int n = s.length();
    for (int i = 0; i < n; i++) {
        if (i + 1 < n && s[i] == s[i + 1]) {
            i++;
        } else {
            workingKeys.insert(s[i]);
        }
    }
    for (char ch : workingKeys) {
        cout << ch;
    }
    cout << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        findWorkingKeys(s);
    }
    return 0;
}
