#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        int n, k;
        string s;
        cin >> n >> k >> s;

        int whiteCount = 0;
        for(int i = 0; i < k; i++){
            if(s[i] == 'W'){
                whiteCount++;
            }
        }
        
        int minRecolors = whiteCount;
        
        for(int i = k; i < n; i++){

            if(s[i - k] == 'W'){
                whiteCount--;
            }

            if(s[i] == 'W'){
                whiteCount++;
            }
            
            minRecolors = min(minRecolors, whiteCount);
        }
        
        cout << minRecolors << endl;
    }
    
    return 0;
}