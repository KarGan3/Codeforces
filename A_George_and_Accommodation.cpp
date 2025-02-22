#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count = 0;
    while(n--){
        long long m,n;
        cin>>m>>n;
        if(m < n){
            count++;
        }
    }
    cout<<count<<endl;
}