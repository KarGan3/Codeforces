#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long n, k;
        cin >> n >> k;
        
        long long min_max = (n + k - 1) / k * k;
        cout << (min_max + n - 1) / n << endl;
    }
    
    return 0;
}
