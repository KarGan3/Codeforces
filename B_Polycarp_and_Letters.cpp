#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;
void max_pretty_set_size(int n, const string &s) {
    int max_size = 0;
    unordered_set<char> current_set; 
    for (char c : s) {
        if (isupper(c)) {
            max_size = max(max_size, static_cast<int>(current_set.size()));
            current_set.clear();
        } else {
            current_set.insert(c);
        }
    }
    max_size = max(max_size, static_cast<int>(current_set.size()));
    
    cout << max_size << endl;
}
int main() {
    int n;
    string s;
    cin >> n >> s;
    
    max_pretty_set_size(n, s);
    
    return 0;
}