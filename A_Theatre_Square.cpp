#include<iostream>
using namespace std;
int main(){
    long long m,n,a;
    cin>>m>>n>>a;
    if(a == 1 && m == n){
        long long c = m*n;
        cout<<c;
    }
    else{
        long long b = (n+a-1)/a;
        long long c = (m+a-1)/a;
        long long d = b*c;
        cout<<d;
    }
    return 0;
}