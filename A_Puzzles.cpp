#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> puzzles(m);
    for (int i = 0; i < m; i++) {
        cin >> puzzles[i];
    }
    sort(puzzles.begin(), puzzles.end());
    int minDifference = INT_MAX;
    for (int i = 0; i <= m - n; i++) {
        minDifference = min(minDifference, puzzles[i + n - 1] - puzzles[i]);
    }
    cout << minDifference << endl;
    return 0;
}
