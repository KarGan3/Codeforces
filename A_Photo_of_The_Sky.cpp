#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;

ll minimalPhotoArea(int n, vector<ll>& coords) {
    sort(coords.begin(), coords.end());

    ll minArea = (coords[n - 1] - coords[0]) * (coords[2 * n - 1] - coords[n]);

    for (int i = 1; i <= n; ++i) {
        ll width = coords[i + n - 1] - coords[i];
        ll height = coords[2 * n - 1] - coords[0];
        minArea = min(minArea, width * height);
    }

    return minArea;
}

int main() {
    int n;
    cin >> n;
    vector<ll> coords(2 * n);
    
    for (int i = 0; i < 2 * n; ++i) {
        cin >> coords[i];
    }

    cout << minimalPhotoArea(n, coords) << endl;
    return 0;
}