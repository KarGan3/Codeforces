#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        
        sort(arr, arr + n);
        
        if((arr[0] + arr[n-1]) % 2 == 0){
            cout << 0 << endl;
            continue;
        }
        
        int min_removals = n - 1;
        
        for(int left = 0; left < n; left++){
            for(int right = left; right < n; right++){
                if((arr[left] + arr[right]) % 2 == 0){
                    int kept = right - left + 1;
                    int removals = n - kept;
                    min_removals = min(min_removals, removals);
                }
            }
        }
        
        cout << min_removals << endl;
    }
    return 0;
}