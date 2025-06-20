#include <iostream>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    
    int minPos = a + 1;
    int maxPos = n - b;

    cout << max(0, maxPos - minPos + 1) << endl;
    return 0;
}