#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

long long solve() {
    int n;
    cin >> n;
    
    priority_queue<int> pq;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        pq.push(x);
    }
    
    if (n == 1) {
        return pq.top();
    }
    while (pq.size() > 1) {
        int a = pq.top(); pq.pop();
        int b = pq.top(); pq.pop();
        int new_element = a + b - 1;
        
        pq.push(new_element);
    }
    
    return pq.top();
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        cout << solve() << endl;
    }
    
    return 0;
}