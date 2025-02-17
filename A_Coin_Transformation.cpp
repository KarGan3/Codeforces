#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<long long, long long> memo;

long long max_coins(long long n) {
    if (n <= 3) return 1;
    if (memo.count(n)) return memo[n];
    
    // Transform one coin of value n into two coins of value (n / 4)
    return memo[n] = max_coins(n / 4) * 2;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        cout << max_coins(n) << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
