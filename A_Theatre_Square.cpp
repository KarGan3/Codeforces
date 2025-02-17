#include<iostream>
using namespace std;
int main(){
    int m,n,a;
    cin>>m>>n>>a;
    int b = (n+a-1)/a;
    int c = (m+a-1)/a;
    int d = b*c;
    cout<<d;
}