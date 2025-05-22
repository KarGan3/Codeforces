#include <iostream>
#include <vector>
#include <numeric> // for std::gcd
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        bool all_equal = true;
        for (int i = 1; i < n; ++i) {
            if (a[i] != a[0]) {
                all_equal = false;
                break;
            }
        }

        if (all_equal) {
            cout << "No\n";
        } else {
            cout << "Yes\n";
            vector<int> ans(n);
            bool assigned = false;
            for (int i = 0; i < n; ++i) {
                if (a[i] != a[0]) {
                    ans[i] = 1;
                    assigned = true;
                }
            }
            if (!assigned) ans[0] = 1; // fallback
            for (int i = 0; i < n; ++i) {
                if (ans[i] == 0) cout << "1 ";
                else cout << "2 ";
            }
            cout << '\n';
        }
    }

    return 0;
}
