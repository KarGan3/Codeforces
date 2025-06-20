#include <iostream>
using namespace std;

int main() {
    int a, b, hours = 0;
    cin >> a >> b;
    
    hours = a;
    
    while (a >= b) {
        int newCandles = a / b;
        hours += newCandles;
        a = newCandles + (a % b);
    }

    cout << hours << endl;
    return 0;
}
