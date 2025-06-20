#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int t;
        cin>>t;
        int count = 0;
        while(t != 0){
            if(t < 4){
                count++;
                t -= 2;   
            }
            else{
                count++;
                t -=4;
            }
        }
        cout<<count<<endl;
    }
}