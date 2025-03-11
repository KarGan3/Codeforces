#include <iostream>
using namespace std;

void solve() {
    int l, r, d, u;
    cin >> l >> r >> d >> u;
    if (l == r && d == u && (l+r) == (d+u))
        cout << "Yes\n";
    else
        cout << "No\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}