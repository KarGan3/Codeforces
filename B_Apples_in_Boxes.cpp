#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        ll k;
        cin >> n >> k;
        vector<ll> a(n);
        ll max_a = 0, min_a = 1e9 + 1;
        int non_empty = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            max_a = max(max_a, a[i]);
            min_a = min(min_a, a[i]);
            if (a[i] > 0) non_empty++;
        }
        
        if (max_a - min_a > k) {
            // Compute new max after picking from a max box
            ll new_max = 0;
            int max_count = 0;
            for (int i = 0; i < n; ++i) {
                if (a[i] == max_a) {
                    max_count++;
                } else {
                    new_max = max(new_max, a[i]);
                }
            }
            if (max_count > 1) {
                new_max = max(new_max, max_a - 1);
            }
            if (new_max - min_a > k) {
                cout << "Jerry\n";
            } else {
                cout << (non_empty % 2 == 1 ? "Tom\n" : "Jerry\n");
            }
        } else {
            cout << (non_empty % 2 == 1 ? "Tom\n" : "Jerry\n");
        }
    }
    
    return 0;
}